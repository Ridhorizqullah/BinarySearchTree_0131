#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    Node(string i, Node* l, Node* r) {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

//BinaryTree Class
class BinaryTree {
public:
    Node* ROOT;
    BinaryTree() {
        ROOT = nullptr;  //  ROOT to null
    }
};

void insert(string element) { // Insert a Node in a Binary Search Tree
    Node* newNode = new Node(element, nullptr, nullptr); // Allocate memmory for the new node
    newNode->info = element;  // Assign to the data field of the new node
    newNode->leftchild = nullptr;  //Make the left child of the new node point to null
    newNode->rightchild = nullptr; // Make the right child of the new node point to null

    newNode->leftchild = nullptr;
    newNode->rightchild = nullptr;

