#include<iostream>
using namespace std;
// Node structure with float coff and int exp
class Node{
    public:
    float coff;
    int exp;
    Node*next;
    Node(float coff,int exp){
       this->coff=coff;
       this->exp=exp;
       next= NULL; 
    }
};
// for entering new elements to linkedlist in descending order of expononent
Node* insert(Node*head,float coff,int exp){
    Node* newNode=new Node(coff,exp);
    Node* temp=head;
   
    if(head==NULL){
        head=newNode;
        
        return head;
    }
    else{
         for (temp = head; temp->next != NULL;)
        {
            if (temp->next->exp > exp)
                temp = temp->next;
            else
                break;
        }
        if(temp==head && exp > head->exp){
            newNode->next=temp;
            head=newNode;
            return head;
        }
       
        else{
             newNode->next=temp->next;
             temp->next=newNode;
             return head;
        }
       

        
       
    }
}
// for creating linkedlist
Node* create(Node* head){
    int n;
    cout<<"Enter the number of terms"<<endl;
    cin>>n;
    int exp;
    float coff;
    for(int i=0;i<n;i++){
            cout<<"Enter the value of cofficient for term "<<i+1<<endl;
            cin>>coff;
            cout<<"Enter the value of exponent for term "<<i+1<<endl;
            cin>>exp;
            head=insert(head,coff,exp);

    }
    return head;
}
// for print of linkedlist
void print(Node*head){
    if(head==NULL){
        cout<<"Its blank"<<endl;
    }
    else{
        int count=0;
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<"The cofficient for "<<count+1<<" term is "<<temp->coff<<endl;
        cout<<"The exponent for "<<count+1<<" term is "<<temp->exp<<endl;
        temp=temp->next;
        count++; 
    }
    }
    
    
}
void printpol(Node*head){
    if(head==NULL){
        cout<<"Its blank"<<endl;
    }
    else{
        
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->coff<<"x^"<<temp->exp<<"+";
        
        temp=temp->next;
        
    }
    cout<<""<<endl;
    }
}
// addition of two polynomials
void addofPoly(Node* head1,Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    Node* head3=NULL;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->exp==temp2->exp){
            head3=insert(head3,temp2->coff+temp1->coff,temp1->exp);
            temp2=temp2->next;
            temp1=temp1->next;
        }
        else if(temp1->exp>temp2->exp){
            head3=insert(head3,temp1->coff,temp1->exp);
            temp1=temp1->next;
        }
        else if(temp2->exp>temp1->exp){
             head3=insert(head3,temp2->coff,temp2->exp);
            temp2=temp2->next;
        }
    }
    while (temp1!=NULL)
    {
        head3=insert(head3,temp1->coff,temp1->exp);
        temp1=temp1->next;
    }
     while (temp2!=NULL)
    {
        head3=insert(head3,temp2->coff,temp2->exp);
        temp2=temp2->next;
    }
    cout<<"The addition of two polynomial is"<<endl;
    print(head3);
    printpol(head3);
}

int main()
{
    Node* head1=NULL;
    Node* head2=NULL;
    cout<<"Enter the first polynomial"<<endl;
    head1=create(head1);
    printpol(head1);
    cout<<"Enter the second polynomial"<<endl;
    head2=create(head2);
     printpol(head2);
    
    addofPoly(head1,head2);
return 0;
}