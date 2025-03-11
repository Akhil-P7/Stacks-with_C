#include"stack.h"

//PUSH ELEMENT IN STACK
void push(int *S, int *top,  int size)
{
    int x ;
    if(*(top)!=(size-1))
    {
        printf("Enter the Value to be Pushed : ");
        scanf("%d",&x);
        (*top)++;
        S[*top] = x ;
    }
    else
    {
        printf("Stack Overflow\n\n\n");
    }
}

//POP ELEMENT OUT OF STACK
int pop(int *S, int *top)
{
    int x ;
    if(*top!=-1)
    {
        x = S[*top];
        (*top)--;
        return (x) ;
    }
    else
    {
        printf("Stack Underflow\n\n\n");
        return -1 ;
    }
}

//DISPLAY ELEMENT OF STACK
void display(int *S , int top)
{
    if(top!=-1)
    {
        while(top!=-1)
        {
            printf("%d ,",S[top]);
            top--;
        }
        printf("\n\n\n");
    }
    else
    {
        printf("Stack is Empty\n\n\n");
    }  
}

//DISPLAY TOPMOST ELEMENT OF STACK
int peek(int *S , int top)
{
    if(top!=-1)
    {
        return (S[top]) ;
    }
    else
    {
        printf("Stack is Empty\n\n\n");
        return -1 ;
    }  
}