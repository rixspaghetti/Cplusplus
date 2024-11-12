#include <iostream>
using namespace std;

// Node class representing each node in the binary search tree
class Node {
public: 
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Binary seach tree class
class BinarySearchTree {
private: 
    Node* root;

    // helper function to insert a node into the BST
    Node* insert(Node* node, int value){
        if(node == nullptr){
            return new Node(value);
        }
        if(value < node->data){
            node->left = insert(node->left, value);
        } else if (value > node->data){
            node->right = insert(node->right, value);
        }
        return node;
    }
};