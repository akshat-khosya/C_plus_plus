/*Write a C/C++ program to demonstrate push operation and overflow condition

on stack using array. */


#include <stdio.h>

#include <stdlib.h>

#define MAX 10 //Maximum number of elements that can be stored

int top = -1, stack[MAX];
void push();
void isFull();

void main()
{
    int ch;
    while (1) //infinite loop, will end when choice will be 3
    {
        printf("\n** Stack Menu **");
        printf("\n\n1.Push\n2.isFull\n3.Exit");
        printf("\n\nEnter your choice(1-3):");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                push();
                break;
            case 2:
                isFull();
                break;
            case 3:
                exit(0);
            default:
                printf("\nWrong Choice!!");
        }
        
    }
    
}
void push()
{
    int val;
    if (top == MAX - 1)
    {
        printf("\nStack is full!!");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void isFull()
{
    if (top == MAX - 1)
    {
        printf("Stack is full!\n");
    }
    else
    {
        printf("Stack is not full\n");
    }
}