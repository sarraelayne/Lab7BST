#include "BST.h"
    /*
	* Returns the root node for this tree
	*
	* @return the root node for this tree.
	*/
	NodeInterface * BST::getRootNode() const {
	    cout << "getRootNode"<<endl;
	}

	/*
	* Attempts to add the given int to the BST tree
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/
	bool BST::add(int val) {
		//calls insert(Node *&T.;aksdjfsa)
	    cout << "add"<< endl;
	    return insert(T->value, val);
	}

	/*
	* Attempts to remove the given int from the BST tree
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/
	bool BST::remove(int data) {
		cout << "remove" << endl;
		/*
		
		*/
	}
	bool BST::erase(Node * &T) {
		cout << "erase" << endl;
	}
	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
	void BST::clear()
	{
	    cout << "clear"<<endl;
	}
	void BST::find(Node &T, int val) {
	/*	T = new Node(val);
		if (T == NULL) {
			return NULL;
		}
		if (T->value == val) {
			return T;
		}
		if (val < T->value) {
			return find(T->leftChild, val);
		}
		else {
			return find(T->rightChild, val);
		}*/
	}
	bool BST::insert(Node *&T, int val) {
		if (T == NULL) {
	        T = new Node(val);
	        return true;
	    }
	    if (T->value <= val) {
	        return false;
	    }
	    if (val < T->value) {
	        return insert(T->leftChild, val);
	    }
	    else {
	        return insert(T->rightChild, val);
	    }
	}
