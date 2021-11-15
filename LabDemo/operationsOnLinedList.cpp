#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
       this->data=data;
       next= NULL; 
    }
};
Node* insertAtHead(Node* head,int data){
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
    return head;
    
}
void insertAtTail(Node* head, int data){
   
    Node* newNode=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
       
    }
    temp->next=newNode;
    
}
Node* insertNode(Node *head,int i,int data){
    Node *newNode=new Node(data);
    int count=0;
    Node *temp=head;
    if(i==0){
        newNode->next=head;
        head=newNode;
        return head; 
    }
    while (temp!=NULL && count<i-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return head;
    
    
}
Node* deleteAtHead(Node* head){
    head=head->next;

    return head;

}
Node* deleteAtTail(Node* head){
     Node* temp=head;
      Node* temp1=head;
     while(temp->next!=NULL){
        temp1=temp;
        temp=temp->next;
       
    }
    temp1->next=NULL;
    return head;

}
Node* deleteNode(Node *head,int i){
    if(i==0){
        head=head->next;
        return head;
    }
    Node *temp=head;
    int count=0;
    while (temp!=NULL && count<i-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
    Node*a=temp->next;
    temp->next=a->next;
    }
    return head;
}
void midleNode(Node* head){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return ;
    }
    Node* fast=head->next;
    Node* slow=head;
    while (fast!=NULL || fast->next!=NULL)
    {
        slow=slow->next;
        fast=(fast->next)->next;
        
    }
    
    cout<<slow->data<<endl;
   
}
void print(Node *head){
    if(head==NULL){
        cout<<"The linked list is empty"<<endl;
    }
    else{
         while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head -> next;
    }
    cout<<""<<endl;
    }
   
    
}
int main()
{
    Node* head=NULL;
    back:
    cout<<"Enter the operation you want to perform"<<endl;
    cout<<"Enter 1 for insert node at Head"<<endl;
    cout<<"Enter 2 for insert node at tail"<<endl;
    cout<<"Enter 3 for insert node at i index"<<endl;
    cout<<"Enter 4 for delete head node"<<endl;
    cout<<"Enter 5 for delete tail node"<<endl;
    cout<<"Enter 6 for delete node at i index"<<endl;
    cout<<"Enter 7 for to display linked list"<<endl;
    cout<<"Enter 8 to exit"<<endl;
    int operation;
    cin>>operation;
    switch (operation)
    {
    case 1:{
        cout<<"Enter the value for node"<<endl;
        int data;
        cin>>data;
        head=insertAtHead(head,data);
        goto back;
        
        break;
    }
     case 2:{
         cout<<"Enter the value for node"<<endl;
         int data;
         cin>>data;
         insertAtTail(head,data);
         goto back;
        break;
    }
     case 3:{
         cout<<"Enter the value of index and value of node"<<endl;
         int i,data;
         cin>>i>>data;
         head=insertNode(head,i,data);
         goto back;
        break;
    }
     case 4:{
         head=deleteAtHead(head);
         goto back;
        break;
    }
     case 5:{
          head=deleteAtTail(head);
         goto back;
        break;
    }
     case 6:{
         cout<<"Enter the index you want to delete"<<endl;
         int i;
         cin>>i;
         head=deleteNode(head,i);
         goto back;
        break;
    }
     case 7:{
         print(head);
         goto back;
        break;
    }
     case 8:{
        midleNode(head);
         goto back;
        break;
    }
        
    
    default:{
        cout<<"Invalid choice"<<endl;
        cout<<"Continuing....\n";
        goto back;
        break;
        }
    }

    
return 0;
}