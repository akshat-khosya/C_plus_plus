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
void Inorder(struct Node *root)
{
 if (root == NULL)
 {
 return;
 } 
 Inorder(root->left);
 cout << root->data << " ";
 Inorder(root->right);
}
int main(){
 Node* root=NULL;
 cout<<"Insertion in BST"<<endl;
 root=insertBST(root,5);
 insertBST(root,1);
 insertBST(root,3);
 insertBST(root,4);
 insertBST(root,2);
 insertBST(root,7);
 Inorder(root);
 cout<<endl;
 cout<<"Enter Element for search"<<endl;
 int key;
 cin>>key;
 if (SearchinBST(root,key)==NULL)
 {
 cout<<"Does Not Exist"<<endl;
 }
 else{
 cout<<"Key Exist"<<endl;
 }
 cout<<"Enter element for deletion"<<endl;
 int keydel;
 cin>>keydel;
 deletioninBST(root,keydel);
 Inorder(root);

}