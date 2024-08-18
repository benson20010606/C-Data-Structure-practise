#ifndef MY_BINARY_SEARCH_TREE_H
#define MY_BINARY_SEARCH_TREE_H
#include <stdlib.h>


typedef struct TreeNode 
{
    int value;
    struct TreeNodeNode* left_child;
    struct TreeNodeNode* right_child;
} TreeNode ;



TreeNode* createNode(int value);
TreeNode* insertNode(TreeNode* parent, int value);
TreeNode* deleteNode(TreeNode* parent,int value);
TreeNode* searchNode(TreeNode* parent, int value);
TreeNode* findMin(TreeNode* parent);
TreeNode* findMax(TreeNode* parent);

void traversal(TreeNode* parent);
int calculateHeight(TreeNode* parent) ;
void clearTree(TreeNode* parent);

#endif