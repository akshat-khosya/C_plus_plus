#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        next=NULL;
        prev==NULL;
    }
};
Node* insert(Node* head){
    int data;
    cin>>data;
    Node* newNode=new Node(data);
    if(head==NULL){
       head=newNode;
       newNode->prev=NULL;
       return head; 
        
    }
    Node* temp=head;
    
    while (temp->next!=NULL)
    {
      
       temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    return head;
    

}
Node* tail(Node* head){
    if(head==NULL){
        return head;
    }
     Node* temp=head;
   
    while (temp->next!=NULL)
    {
      
      temp= temp->next;
    }
    return temp->prev;
}
Node* create(Node* head){
    cout<<"Enter the lenght of linked list"<<endl;
    int lenght;
    cin>>lenght;
    cout<<"Enter data"<<endl;
    for (int i = 0; i < lenght; i++)
    {
        head=insert(head);
    }
    return head;

    
}
void print(Node *head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head -> next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    head=create(head);
    cout<<"Your entered linkedlist is"<<endl;
    print(head);
    head=tail(head);
    cout<<"Reverse linkedlist using pre of double linked list"<<endl;
    print(head);

    
return 0;
}