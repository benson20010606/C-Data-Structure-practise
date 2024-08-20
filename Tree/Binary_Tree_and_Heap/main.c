#include <stdio.h>
#include <stdlib.h>
#include "myheaptree.h"



void clear(void){
    char ch;
    while((ch=getchar())!='\n'&&ch!=EOF){	
    }
}


int main(int argc, char *argv[]){
    char ch;
    int value=0;
    int condition=1;
    TreeNode * root =NULL;
    TreeNode*  result =NULL;
    while (condition) {
        
      

        printf("\n\n1. insert  ");	
        printf("2. delete  ");	
        printf("3. search  ");	
        printf("4. max  ");	
        printf("5. min  ");	
        printf("6. traversal  ");	
        printf("7. Height  ");
        printf("8. clearTree  ");
        printf("Q. exit  ");

 


        
        ch=getchar();
        clear();
        switch (ch)
        {
            case '1' :
                printf("what value  u want to insert  : ");
                scanf("%d",&value);
                clear();
                root=insertNode(root,value);
                //
                
                break;

            case '2' :
            /* code */
                printf("which value  u want to delete : ");
                scanf("%d",&value);
                clear();
                root=deleteNode(root);
        
                //
                break;
            case '3' :
            /* code */
                printf("which value  u want to search : ");
                scanf("%d",&value);
                clear();
                result =searchNode(root, value);
                if (result!=NULL){
                    printf("value %d is at %p",value,result);
                }else{
                    printf("can't find value %d",value);
                }
                break;
                //
            case '4' :
            /* code */
                result=findMax(root);
                if (result != NULL){
                    printf("The maximum is %d , at %p",result->value,result);
                }else{
                    printf("NULL!");
                }
                break;
            case '5' :
            /* code */
                result=findMin(root);
                if (result != NULL){
                    printf("The minimum is %d , at %p",result->value,result);
                }else{
                    printf("NULL!");
                }
                break;
            case '6' :
            /* code */
                traversal(root);
                break;
            case '7' :
               printf("The tree hight is %d",calculateHeight(root));
               
                break;
            case '8' :
                clearTree(root);
                break;
            case 'Q' :
                condition=0;
                clearTree(root);
                break;


        }


    }

    return 0;

}