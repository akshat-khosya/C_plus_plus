#include <iostream>
using namespace std;
struct Node{
 int data;
 Node* left, *right;
 Node(int val){
 data=val;
 left=NULL;
 right=NULL;
 }
};
// Insertion
Node* insertBST(Node* root,int val){
 if (root==NULL)
 {
 return new Node(val);
 }

 if (val<root->data)
 {
 root->left=insertBST(root->left,val);
 }
 else{
 root->right=insertBST(root->right,val);
 }
 return root;
}
// Searching
Node* SearchinBST(Node* root,int key){
 if (root==NULL)
 {
 return NULL;
 }

 if (root->data==key)
 {
 return root;
 }
 if (root->data>key)
 {
 return SearchinBST(root->left,key);
 }
 else{
 return SearchinBST(root->right,key); 
 }

}
//Inorder Succesor
Node* inodersucc(Node* root){
 Node* curr=root;
 while (curr && curr->left!=NULL)
 {
 curr=curr->left;
 }
 return curr;
}
//Deletion in BST
Node* deletioninBST(Node* root,int key){
 if (key<root->data)
 {
 root->left=deletioninBST(root->left,key);
 }
 else if(key>root->data){
 root->right=deletioninBST(root->right,key);
 }
 else{
 if (root->left==NULL)
 {
 Node* temp=root->right;
 free(root);
 return temp;
 }
 else if(root->right==NULL){
 Node* temp=root->left;
 free(root);
 return temp;
 }
 Node* temp=inodersucc(root->right);
 root->data=temp->data;
 root->right=deletioninBST(root->right,temp->data);
 }
 return root;
}
// Inorder Traversal
void printTree(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<": ";
    if(root->left != NULL)
    {
        cout<<"L"<<root->left->data;
    }
    if(root->right != NULL)
    {
        cout<<" R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

int main(){
Node* root=NULL;
while(1)
{
 cout<<"1: Insertion\n2: Search\n3: Deletion\n4: Exit\n"; 
 cout<<"Enter choice: ";
 int va;
 cin>>va;
 if(va==1)
 {
 cout<<"Insertion in BST\n";
 cout<<"enter number of elements: ";
 int m;
 cin>>m;
 cout<<"enter elements: ";
 int ke;
 cin>>ke;
 root=insertBST(root,ke);
 m--;
while(m--)
{
    cin>>ke;
 insertBST(root,ke);
}
 cout<<"BST after insertion\n";
 printTree(root);
 cout<<endl;
 }
 else if(va==2)
 {
 cout<<"Enter Element for search: ";
 int key;
 cin>>key;
 if (SearchinBST(root,key)==NULL)
 {
 cout<<"Does Not Exist"<<endl;
 }
 else{
 cout<<"Key Exist"<<endl;
 }
 }
 else if(va==3)
 {
 cout<<"Enter element for deletion: ";
 int keydel;
 cin>>keydel;
 deletioninBST(root,keydel);
 cout<<"Tree after deletion\n";
 printTree(root);
 }
 else
 break;
}

cout<<"Program Ends";
 return 0;
}