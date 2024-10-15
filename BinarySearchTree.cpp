#include "BinarySearchTree.h"
#include <iostream>

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a new value into the BST
Node* insert(Node* t, int data) {
    if (!t) { // if the tree is empty
        return createNode(data);
    }
    if (data == t->data) {
        // Don't allow dupe values
        return t;
    }
    if (data < t->data) { // if data is less than the node, recursively traverse the tree to the left
        t->left = insert(t->left, data);
    }
    else {
        t->right = insert(t->right, data);
    }
    return t;
}


// Print all elements of binary search tree rooted at t - preorder traversal
void print(const Node* t) {
    if (t) {
        std::cout << t->data << " "; // Visit the root
        print(t->left); // Traverse left subtree
        print(t->right); // Traverse right subtree
    }
}

Node* minimum(Node* t) {
    if (!t) {
        return nullptr;
    }

    while (t->left) {
        t = t->left;
    }
    return t;
}

int size(const Node* t) {
    int numElem = 0;
    return numElem;
}
