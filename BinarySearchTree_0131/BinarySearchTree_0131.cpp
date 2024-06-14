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


