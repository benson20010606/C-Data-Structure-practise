#include <stdio.h>
#include <stdlib.h>
#include "myheaptree.h"



TreeNode* createNode(int value){
    TreeNode* newnode =(TreeNode*)malloc(sizeof(TreeNode));
    newnode->value=value;
    newnode->left_child=NULL;
    newnode->right_child=NULL;
    return newnode;
}
TreeNode* insertNode(TreeNode* parent, int value){
    if( parent== NULL){
        parent=createNode(value);
    }else{
        TreeNode* last = NULL;
        TreeNode * queue[NODE_MAX];
        int front=0;
        int rear=0;
        queue[rear++]=parent;
        while (front < rear){
            last=queue[front++];

            if(last->left_child !=NULL){
                queue[++rear]=last->left_child;
            }else{
                last->left_child=createNode(value);
                break;
            }
            if(last->right_child != NULL){
                queue[++rear]=last->right_child;
            }else{
                last->right_child=createNode(value);
                break; 
            }
        }
    }
  
    return heapify(parent);
}
int deleteNode(TreeNode** parent){
    if( *parent== NULL){
        return -1;
    }
    int max = (*parent)->value;

    TreeNode* last = NULL;
    TreeNode * queue[NODE_MAX];
    int front=0;
    int rear=0;
    queue[rear++]=(*parent);
    while (front < rear){
        last=queue[front++];

        if(last->left_child !=NULL){
            queue[++rear]=last->left_child;
        }
        if(last->right_child != NULL){
            queue[++rear]=last->right_child;
        }
    }
    (*parent)->value=last->value;
    int lastindex=rear-1;

    if((lastindex)%2==0){
        queue[(lastindex-1)/2]->right_child=NULL;
    }else{
        queue[(lastindex-1)/2]->left_child=NULL;
    }
    free(last);

    heapify(*parent);
    return max;
}
TreeNode * heapify(TreeNode* parent){
    if ( parent == NULL){
        return NULL;
    }
    TreeNode * largest = parent;
    if (parent->left_child != NULL && parent->left_child->value >largest->value ) {
        largest = parent->left_child;
    }
    if (parent->right_child != NULL && parent->right_child->value >largest->value ) {
        largest = parent->right_child;
    }
    if (largest != parent){
        parent->value=parent->value ^ largest->value;
        largest->value=parent->value ^ largest->value;
        parent->value=parent->value ^ largest->value;
        heapify(largest);
    }
    return parent;
}


/*
TreeNode* findLastNode(TreeNode* parent){
    if (parent == NULL){
        return NULL;
    }
    TreeNode* last = NULL;
    TreeNode * queue[NODE_MAX];
    int front=0;
    int rear=0;
    queue[rear++]=parent;
    while (front < rear){
        last=queue[front++];

        if(last->left_child !=NULL){
            queue[++rear]=last->left_child;
        }
        if(last->right_child != NULL){
            queue[++rear]=last->right_child;
        }
    }
    return last;
}
*/


void traversal(TreeNode* parent){
    if(parent== NULL){

        return;
    }
    
    traversal(parent->left_child);
    printf("%2d ",parent->value);
    traversal(parent->right_child);
}
int calculateHeight(TreeNode* parent){
    if(parent==NULL){
        return 0;
       
    }
    int left_hight=calculateHeight(parent->left_child);
    int right_hight=calculateHeight(parent->right_child);
    return (left_hight>right_hight? left_hight:right_hight)+1;
}
void clearTree(TreeNode* parent){
    if (parent== NULL){
        return;
    }

    clearTree(parent->left_child);
    clearTree(parent->right_child);
    free(parent);
    
}





    
