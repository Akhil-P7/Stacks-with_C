#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main()
{
    int *Stack ; int Top = -1 , size , ch , x=0;
    printf("Enter the max size of stack : ");
    scanf("%d",&size);
    Stack = (int*)calloc(size ,sizeof(int));
    do
    {
        printf("Enter you Choice :\nPress 1 for Push\nPress 2 for Pop\nPress 3 for display\nPress 0 for EXIT.");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                        push(Stack , &Top , size);
                        printf("%d has been pushed\n\n\n",Stack[Top]);
                        break;
            case 2 :
                        x = pop(Stack , &Top);
                        if(x!=-1)
                        printf("%d has been popped\n\n\n",x);
                        break;
            case 3 :
                        display(Stack , Top);
                        break;
            case 4 :
                        x = peek(Stack , Top);
                        if(x!=-1)
                        printf("%d is at the TOP\n\n\n",x);
                        break ;
            default : 
                        printf("Invalid Input\n\n\n");
        }
    }while(ch!=0);
    return 0;
}