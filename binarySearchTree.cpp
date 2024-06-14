#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    //costructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node* ROOT;

    BinaryTree()
    {
        ROOT = NULL;    //Initializing ROOT to NULL
    }

    void insert(string element) //Insert a node in the binary search tree
    {
        Node* newNode = new Node(element, NULL, NULL); //Allocate memory for the new node
    }
};