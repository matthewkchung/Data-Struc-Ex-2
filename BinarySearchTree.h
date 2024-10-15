#pragma once

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data);

Node* insert(Node* t, int data);

void print(const Node* t);

// Returns the minimum element in the tree to which t points. Returns null if the tree is empty.
Node* minimum(Node* t);

// Returns the number of elements in the tree to which t points.
int size(Node* t);
