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
	find(Node &T, int data) { 
	    T = new Node(data);
	    
	    //recursion base cases for traversing tree:
	    if (T == NULL) {
	        return NULL;
	    }
	    if (T->value == data) {
	        return T;
	    }
	    //inductive step for breaking down the problem:
	    if (data < T->value) {//on left side
	        return find(T->left, data);
	    }
	    else {
	        return find(T->right, data);
	    }
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
        	return false;
	    }
	    if (T->value == data) {
	        clear();
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
		    T = posterity;s
		}
	}
};