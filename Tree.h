#ifndef TREE_H
#define TREE_H

typedef int infotype;

typedef struct node *adrNode;

struct node {
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode_103022300114(infotype x);
void insertNode_103022300114(adrNode &root, adrNode p);
void DeleteNode_103022300114(adrNode &root, adrNode &p);
void printInOrder_103022300114(adrNode root);
adrNode findMin_103022300114(adrNode root);

#endif
