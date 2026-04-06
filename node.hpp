#include <algorithm>
using namespace std;

struct node {
    int elem;
    node* parent;
    node* left;
    node* right;
    int height(){
        // IMPLEMENT ME: this is for calculating the height of a node, to be used in the balance factor calculations
        return 0;
    }
};