#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <cstdlib>
#include "bintree.hpp"

using namespace std;

class AVLBinTree : public BinaryTree {
    node* root;
    int size;


    int getBalance(node* n) {
        // IMPLEMENT ME: this is for getting the height balance factor of a node
        return 0;
    }
    
    int removeNode(node* n){
        // IMPLEMENT ME: for removing a node and returning the removed value, also to be used in the remove function
        return 0;
    }
    
    void balance(node* n){
        // IMPLEMENT ME: this is for balancing the tree after insertions and removals
    }


public:
    AVLBinTree(){
        root = NULL;
        size = 0;
    }

    void zigleft(node* x) {
        // IMPLEMENT ME: this is for performing a left rotation on node x, to be used in the balancing process
    }

    void zigright(node* y) {
        // IMPLEMENT ME: this is for performing a right rotation on node y, to be used in the balancing process
    }

    void zigzagleft(node* n) {
        // IMPLEMENT ME: this is for performing a left-right rotation on node n, to be used in the balancing process
    }

    void zigzagright(node* n) {
        // IMPLEMENT ME: this is for performing a right-left rotation on node n, to be used in the balancing process
    }
    

    int insert(int num) {
        // IMPLEMENT ME: for inserting a number into the AVL tree, and returning the inserted value or 0 if it already exists
        return 0;
    }

    int remove(int num) {
        // IMPLEMENT ME: for removing a number from the AVL tree, and returning the removed value or 0 if it doesn't exist
        return 0;
    }
    
    node* search(int num){
        // IMPLEMENT ME: for searching a number in the AVL tree, and returning a pointer to the node containing it or NULL if it doesn't exist
        return NULL;
    }

    void printRecursive(node* curr, string indent, bool last) {
        if (curr != NULL) {
            cout << indent;
            if (last) {
                cout << "R----";
                indent += "   ";
            } else {
                cout << "L----";
                indent += "|  ";
            }
            cout << curr->elem << " (h:" << getBalance(curr) << ")" << endl;
            printRecursive(curr->left, indent, false);
            printRecursive(curr->right, indent, true);
        }
    }

    void print() {
        if (root) {
            cout << "Size: " << size << endl;
            printRecursive(root, "", true);
        } else {
            cout << "Tree is empty." << endl;
        }
    }
};
