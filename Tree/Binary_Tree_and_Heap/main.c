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
        printf("3. traversal  ");	
        printf("4. Height  ");
        printf("3. clearTree  ");
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
                printf(" delete max maximum : ");

                value=deleteNode(&root);
                printf("Maximum is %d",value);
        
                //
                break;

            case '3' :
            /* code */
                traversal(root);
                break;
            case '4' :
               printf("The tree hight is %d",calculateHeight(root));
               
                break;
            case '5' :
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