#include <iostream>
#include <conio.h>
#include "src/bst/BST.h"

using namespace std;

int main() {
    BST<int> tree;

    // Insert
    tree.insert(8);
    tree.insert(14);
    tree.insert(6);
    tree.insert(7);
    tree.insert(3);

    // Search
    cout << "Search (8): " << tree.search(8) << endl;
    cout << "Search (14): " << tree.search(14) << endl;
    cout << "Search (6): " << tree.search(6) << endl;
    cout << "Search (7): " << tree.search(7) << endl;
    cout << "Search (3): " << tree.search(3) << endl;

    // Size
    cout << "Size: " << tree.size() << endl;

    // Height
    cout << "Height: " << tree.height() << endl;

    // Inorder
    tree.inorder();

    // Preorder
    tree.preorder();

    // Postorder
    tree.postorder();

    _getch();
    return 0;
}
