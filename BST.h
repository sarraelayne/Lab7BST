#pragma once
#include "BSTInterface.h"
#include <iostream>

using namespace std;

class BST: public BSTInterface {
    
public:
	BSTInterface() {}
	~BSTInterface() {}

	NodeInterface * getRootNode() {
	    return T;
	}
	bool add(int data) {
		if (T == NULL) {
	        T = new Node(data);
	        return true;
	    }
	    if (T->value =< data) {
	        return false;
	    }
	    if (data < T->value) {
	        return insert(T->left, data);
	    }
	    else {
	        return insert(T->right, data);
	    } 
	}
	bool remove(int data) {
	    if (T == NULL) {
        	return false;6
	    }
	    if (T->value == data) {
	        do the delete;
	    }
	    if (T->value > data) {
	        return remove(T->left, data);
	    }
	    else {
	        return remove(T->right, data);
	    }
	}
	void clear() {
	    if (T has no children) {
		    delete T;
		    T = NULL;
		}
		else if (T->left == NULL) {
		    Node *posterity = T->right;
		    delete T;
		    T = posterity;
		}
	}
};