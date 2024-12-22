#include "Tree.h"
#include <iostream>
using namespace std;

adrNode newNode_103022300114(infotype x) {
    adrNode p = new node;
    p->info = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void insertNode_103022300114(adrNode &root, adrNode p) {
    if (root == NULL) {
        root = p;
    } else if (p->info < root->info) {
        insertNode_103022300114(root->left, p);
    } else if (p->info > root->info) {
        insertNode_103022300114(root->right, p);
    }
}

void DeleteNode_103022300114(adrNode &root, adrNode &p) {
    if (root == NULL) return;

    if (p->info < root->info) {
        DeleteNode_103022300114(root->left, p);
    } else if (p->info > root->info) {
        DeleteNode_103022300114(root->right, p);
    } else {
        adrNode temp;

        if (root->left == NULL) {
            temp = root;
            root = root->right;
            delete temp;
        } else if (root->right == NULL) {
            temp = root;
            root = root->left;
            delete temp;
        } else {
            temp = findMin_103022300114(root->right);
            root->info = temp->info;
            adrNode toDelete = newNode_103022300114(temp->info);
            DeleteNode_103022300114(root->right, toDelete);
        }
    }
}

void printInOrder_103022300114(adrNode root) {
    if (root != NULL) {
        printInOrder_103022300114(root->left);
        cout << root->info << " ";
        printInOrder_103022300114(root->right);
    }
}

adrNode findMin_103022300114(adrNode root) {
    if (root == NULL) return NULL;
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}
