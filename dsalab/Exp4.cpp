#include <iostream>
#include <stdlib.h>
 using namespace std;
void enQueue(int queue_array[],int *MAX);
void deQueue(int queue_array[],int *MAX);
void display(int queue_array[],int *MAX);

int rear = - 1;
int front = - 1;

void enQueue(int queue_array[],int *MAX)
{
    int add_item;
    if (rear == *MAX - 1)
    cout<<"\n--------------------------Queue Overflow----------------------- \n"<<endl;
    else{
        if (front == - 1)

        front++;
        cout<<"\nInsert the element in queue : ";
        cin>>add_item;
        rear++;
        queue_array[rear] = add_item;
    }
} 

void deQueue(int queue_array[],int *MAX)
{
    if (front == - 1 || front > rear){
        cout<<"\n---------------------------Queue Underflow-------------------------------- \n"<<endl;
        return ;
    }
    else{
        cout<<"\nElement deleted from queue is : "<<queue_array[front]<<endl;
        front++ ;
    }
} 

void display(int queue_array[],int *MAX){
    int i;
    if (front == - 1)
        cout<<"\n------------------Queue is empty-----------------------\n "<<endl;
    else
    {
        cout<<"\nQueue is : ";
        for (i = front; i <= rear; i++)
           cout<<queue_array[i]<<" ";
       cout<<endl;
    }
} 


int main()
{
    int choice,MAX;
    cout<<"1.Insert element to queue \n";
        cout<<"2.Delete element from queue \n";
        cout<<"3.Display all elements of queue \n";
        cout<<"4.Quit \n";
        cout<<"Enter the size of queue: ";
        cin>>MAX;
        int queue_array[MAX];
    while (1)
    {
        cout<<"\nEnter your choice(1-4) : ";
        cin>>choice;
        switch (choice)
        {
            case 1:
            enQueue(queue_array,&MAX);
            break;
            case 2:
            deQueue(queue_array,&MAX);
            break;
            case 3:
            display(queue_array,&MAX);
            break;
            case 4:
            exit(1);
            default:
            cout<<"Wrong choice \n";
        }
    } 
}