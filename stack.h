#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>


//Function to Push element in Stack
void push(int stack[], int *top, int size);

//Function to Pop element out of Stack
int pop(int stack[], int *top);

//Function to print elements of Stack
void display(int stack[], int top);

//Function to Show topmost element of Stack
int peek(int stack[], int top);

#endif
