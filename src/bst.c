#include <stdlib.h>
#include <stdio.h>
#include "loops.h"

typedef struct node {
    int val;
    struct node* right;
    struct node* left;
} bstNode;

bstNode* makeNode(int val)
{
    bstNode* newNode = (bstNode*) malloc(sizeof(bstNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

bstNode* search(bstNode* root, int val)
{
    if (!root || root->val == val)
    {
        return root;
    }
    else if (root->val < val)
    {
        return search(root->right, val);
    }
    else
    {
        return search(root->left, val);
    }
}

bstNode* insert(bstNode* root, int val)
{
    if (!root)
    {
        return makeNode(val);
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

bstNode* makeTestBST()
{
    bstNode* root = insert(NULL, 8);
    insert(root, 3);
    insert(root, 1);
    insert(root, 6);
    insert(root, 4);
    insert(root, 7);
    insert(root, 10);
    insert(root, 14);
    insert(root, 13);
    insert(root, 21);
}

int main(void)
{
    bstNode* test = makeTestBST();
    for (int l = 0; l < LOOPS; l++)
    {
        inorder(test);
    }
    return 0;
}

