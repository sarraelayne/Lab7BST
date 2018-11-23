#pragma once
#include "BSTInterface.h"
#include "NodeInterface.h"
#include "Node.h"

class BST : public BSTInterface {
public:
	Node* root;
	Node* T;
	BST();
	~BST();

	//Please note that the class that implements this interface must be made
	//of objects which implement the NodeInterface

	/*
	* Returns the root node for this tree
	*
	* @return the root node for this tree.
	*/
	NodeInterface * getRootNode() const;

	/*
	* Attempts to add the given int to the BST tree
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/
	bool add(int val);

	/*
	* Attempts to remove the given int from the BST tree
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/
	bool remove(int val);
	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
	void clear();
	bool insert(Node *&T, int val);
	bool removeNode(Node *&T, int val);
	int traverseTree(Node* T);
	void deleteNodes(Node *T);
};
