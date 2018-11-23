#include "BST.h"
#include "Node.h"
#include <iostream>

using namespace std;

	BST::BST() {
		root = NULL;
	}
	BST::~BST() {
		clear();
	}
    /*
	* Returns the root node for this tree
	*
	* @return the root node for this tree.
	*/
	NodeInterface * BST::getRootNode() const {
	    cout << "getRootNode"<<endl;
	    return root;
	}

	/*
	* Attempts to add the given int to the BST tree
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/
	bool BST::add(int val) {
	    return insert(root, val);	
	}
	/*
	* Attempts to remove the given int from the BST tree
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/
	bool BST::remove(int val) {
		cout << "remove" << endl;
		return removeNode(root, val);
	}
	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
	void BST::clear() {
	    deleteNodes(root);
	    root = NULL;
	}
	bool BST::insert(Node *&T, int val) {
		if (T == NULL) {
	        T = new Node(val);
	        return true;
	    }
	    if (T->val < val) {
	        return insert(T->rightChild, val);
	    }
	    if (val < T->val) {
	        return insert(T->leftChild, val);
	    }
	    return false;
	}
	bool BST::removeNode(Node *&T, int val) {
		if (T == NULL) {
			return false;
		}
		if (val == T->val) {
			if(T->leftChild == NULL && T->rightChild == NULL) {
				Node* tempNode = T;
				T = NULL;
				delete tempNode;
				return true;
			}
			if (T->rightChild != NULL && T->leftChild == NULL) {
				Node* tempNode = T;
				T = T->rightChild;
				delete tempNode;
				return true;
			}
			if (T->rightChild == NULL && T->leftChild != NULL) {
				Node* tempNode = T;
				T = T->leftChild;
				delete tempNode;
				return true;
			}
			else {
				T->val = traverseTree(T->leftChild);
				removeNode(T->leftChild, T->val);
			}
		}
		else if (val < T->val) {
			removeNode(T->leftChild, val);
		}
		else {
			removeNode(T->rightChild, val);
		}
	}
	int BST::traverseTree(Node *T) {
		if (T == NULL) {
			return -1;
		}
		int currVal = T->val;
		Node *leftChild = T->leftChild;
		Node *rightChild = T->rightChild;
		if (leftChild != NULL) {
			int left = traverseTree(leftChild);
			if (left > currVal) {
				currVal = left;
			}
		}
		if (rightChild != NULL) {
			int right = traverseTree(rightChild);
			if (right > currVal) {
				currVal = right;
			}
		}
		return currVal;
	}
	void BST::deleteNodes(Node *T) {
		if (T == NULL) {
			return;
		}
		if (T->leftChild != NULL) {
			deleteNodes(T->leftChild);
		}
		if (T->rightChild != NULL) {
			deleteNodes(T->rightChild);
		}
		delete T;
		return;
	}
