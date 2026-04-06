#include <iostream>
#include "avlbintree.hpp"

using namespace std;

int main() {
    BinaryTree* tree = new AVLBinTree();
    int value, res;
    char choice;
    
    do {
        cout << "Op: ";
        cin >> choice;

        switch (choice) {
            case 'i':
                cin >> value;
                res = tree->insert(value);
                if(res != 0){
                    cout << "Inserted " << res << endl;
                } else {
                    cout << res << " already in the tree" << endl;
                }
                
                break;
            case 'r':
                cin >> value;
                res = tree->remove(value);
                if(res == 0){
                    cout << value << " not found!" << endl;
                } else {
                    cout << "Removed " << value << endl;
                }
                break;
            case 'l':
                cin >> value; 
                tree->zigleft(tree->search(value));
                    cout << "Zig Left on " << value << endl;
                break;
            case 'p':
                tree->print();
                break;
            case 'x':
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}