#ifndef MY_HEAP_TREE_H
#define MY_HEAP_TREE_H
#include <stdlib.h>

#define NODE_MAX 50


typedef struct TreeNode 
{
    int value;
    struct TreeNode* left_child;
    struct TreeNode* right_child;
} TreeNode ;



TreeNode* createNode(int value);
TreeNode* insertNode(TreeNode* parent, int value);
int  deleteNode(TreeNode** parent);
TreeNode * heapify(TreeNode* parent);



void traversal(TreeNode* parent);
int calculateHeight(TreeNode* parent) ;
void clearTree(TreeNode* parent);

#endif