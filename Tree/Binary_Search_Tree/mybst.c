#include <stdio.h>
#include <stdlib.h>
#include "mybst.h"


TreeNode* createNode(int value){
    TreeNode* newnode =(TreeNode*)malloc(sizeof(TreeNode));
    newnode->value=value;
    newnode->left_child=NULL;
    newnode->right_child=NULL;
    return newnode;
}

TreeNode* insertNode(TreeNode* parent, int value){
    if (parent==NULL){
        return createNode(value);
    }
    if( parent->value >= value){
         parent->left_child=insertNode( parent->left_child, value);
    }else if (parent->value < value){
         parent->right_child=insertNode( parent->right_child, value);
    }
    return parent;
}


/* 這樣被釋放的node 其parent 會有內存錯誤的問題
TreeNode* deleteNode(TreeNode* parent,int value){
    TreeNode* target =searchNode(parent,value);
    if( target == NULL){
        printf("cant't delete");
    }else{
        if(target->left_child==NULL && target->right_child==NULL ){
            free(target);
        }else if (target->left_child==NULL){
            TreeNode* replace =findMax(target);
            target->value=replace ->value;
            free(replace);
        }else if(target->right_child==NULL){
            TreeNode* replace =findMin(target);
            target->value=replace ->value;
            free(replace);

    }
    return parent;
    }
}
*/
TreeNode* deleteNode(TreeNode* parent,int value){
    if (parent==NULL){
        return NULL;
    }
    if(value < parent->value){
        parent->left_child = deleteNode(parent->left_child,value);
    }else if (value > parent->value ){
        parent->right_child = deleteNode(parent->right_child,value);
    }else{
       
        if(parent->left_child==NULL&& parent->right_child==NULL){
            free(parent);
            return NULL;
        }else if(parent->left_child==NULL ){
            TreeNode * temp =parent->right_child;
      
            free(parent);
            return temp;
        }else if(parent->right_child==NULL){
            TreeNode * temp =parent->left_child;
            free(parent);
            return temp;
        }
        TreeNode * temp =findMin(parent->right_child);
        parent->value=temp->value;
        parent->right_child=deleteNode( parent->right_child,temp->value);

    }

    return parent;

}

TreeNode* searchNode(TreeNode* parent, int value){
    if(parent==NULL){

        return NULL;
    }if( parent->value > value){
        return searchNode( parent->left_child, value);
    }else if (parent->value < value){
        return searchNode( parent->right_child, value);
    }else if (parent->value == value){
        return parent;
    }
   
}
TreeNode* findMin(TreeNode* parent){
    TreeNode* temp= parent;
    if (temp==NULL){
        return NULL;
    }else{
        while (temp->left_child != NULL){
            temp=temp->left_child;
        }
    }
    return temp;
}
TreeNode* findMax(TreeNode* parent){
    TreeNode* temp= parent;
    if (temp==NULL){
        return NULL;
    }else{
        while (temp->right_child != NULL){
            temp=temp->right_child;
        }
    }
    return temp;
}

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





    
