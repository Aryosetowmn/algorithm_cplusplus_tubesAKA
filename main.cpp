#include "Tree.h"
#include <iostream>
using namespace std;

bool isEmpty(adrNode root) {
    return root == NULL;
}

int main() {
    adrNode root = NULL;

    int values[] = {8, 6, 15, 4, 7, 12, 17, 9, 13};
    for (int value : values) {
        adrNode p = newNode_103022300114(value);
        insertNode_103022300114(root, p);
    }

    printInOrder_103022300114(root);
    cout << endl;

    int deleteValues[] = {8, 9, 12, 13, 15, 17, 7, 6, 4};
    for (int value : deleteValues) {
        adrNode p = newNode_103022300114(value);
        DeleteNode_103022300114(root, p);
        if (isEmpty(root)) {
            cout << "(kosong)" << endl;
        } else {
            printInOrder_103022300114(root);
            cout << endl;
        }
    }
    return 0;
}
