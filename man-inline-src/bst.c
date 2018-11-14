#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

typedef struct node {
    int val;
    struct node* right;
    struct node* left;
} bstNode;

bstNode* insert(bstNode* root, int val)
{
    if (!root)
    {
        bstNode* newNode = (bstNode*) malloc(sizeof(bstNode));
        newNode->val = val;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    else if (root->val < val)
    {
        root->right = insert(root->right, val);
    }
    else
    {
        root->left = insert(root->left, val);
    }
    return root;
}

void inorder(bstNode* root)
{
    if (root)
    {
        inorder(root->left);
        printf("%d\n", root->val);
        inorder(root->right);
    }
}

int main(void)
{
    // create root
    bstNode* test = (bstNode*) malloc(sizeof(bstNode));
    test->val = 8;
    test->left = NULL;
    test->right = NULL;
    // insert vals
    insert(test, 3);
    insert(test, 1);
    insert(test, 6);
    insert(test, 4);
    insert(test, 7);
    insert(test, 10);
    insert(test, 14);
    insert(test, 13);
    insert(test, 21);
    // run
    for (int l = 0; l < LOOPS; l++)
    {
        // traverse
        inorder(test);
    }
    return 0;
}

