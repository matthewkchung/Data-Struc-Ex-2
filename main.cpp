// CPTR-318-Prac05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BinarySearchTree.h"

int main()
{
    // Create the root
    Node* root = new Node();
    root = createNode(5);
    insert(root, 4);
    insert(root, 6);
    insert(root, 7);
    insert(root, 2);
    insert(root, 1);

    // Print the tree
    std::cout << "Preorder traversal: ";
    print(root);
    std::cout << std::endl;

    // Find the min value
    std::cout << "Min value: ";
    std::cout << minimum(root)->data;

    return 0;
}


