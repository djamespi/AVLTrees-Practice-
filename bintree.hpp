#include "node.hpp"

using namespace std;

class BinaryTree {
public:
    virtual void zigleft(node* n) = 0;
    virtual void zigright(node* n) = 0;
    virtual void zigzagleft(node* n) = 0;
    virtual void zigzagright(node* n) = 0;
    virtual int insert(int num) = 0;
    virtual int remove(int num) = 0;
    virtual node* search(int num) = 0;
    virtual void print() = 0;
};

