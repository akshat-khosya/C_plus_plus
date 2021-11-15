#include <iostream>
#include <queue>
using namespace std;
template <typename T>
class BinaryTreeNode {
    public:
    T data;
    BinaryTreeNode* leftNode;
    BinaryTreeNode* rightNode;
    BinaryTreeNode(T data){
        this->data=data;
        leftNode=NULL;
        rightNode=NULL;
    }
    ~BinaryTreeNode(){
        delete leftNode;
        delete rightNode; 
    }
};
BinaryTreeNode<int>* takeInputlevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
   if(rootData== -1){
       return NULL;
   }
   BinaryTreeNode<int>* root= new BinaryTreeNode<int>(rootData);
   queue<BinaryTreeNode<int>*> pendingNodes;
   pendingNodes.push(root);
   while (pendingNodes.size()!=0)
   {
       BinaryTreeNode<int>* front=pendingNodes.front();
       pendingNodes.pop();
       cout<<"Enter left child of "<<front->data<<endl;
       int leftChildData;
       cin>>leftChildData;
       if(leftChildData!=-1){
           BinaryTreeNode<int>* child= new BinaryTreeNode<int>(leftChildData);
           front->leftNode=child;
           pendingNodes.push(child);
       }
       cout<<"Enter right child of "<<front->data<<endl;
       int rightChildData;
       cin>>rightChildData;
       if(rightChildData!=-1){
           BinaryTreeNode<int>* child= new BinaryTreeNode<int>(rightChildData);
           front->rightNode=child;
           pendingNodes.push(child);
       }
   }
   return root;
}
BinaryTreeNode<int>* takeInput(){
   int rootData;
   cout<<"Enter data"<<endl;
   cin>>rootData;
   if(rootData== -1){
       return NULL;
   }
   BinaryTreeNode<int>* root= new BinaryTreeNode<int>(rootData);
   BinaryTreeNode<int>* leftCild= takeInput();
   BinaryTreeNode<int>* rightChild= takeInput();
   root->leftNode=leftCild;
   root->rightNode=rightChild;
   return root;
   

}
void printTreeLevelWise(BinaryTreeNode<int>* root){
    if(root==NULL){
        return ;
    }
    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);
    while (pendingNode.size()!=0)
    {
        BinaryTreeNode<int>* front=pendingNode.front();
        pendingNode.pop();
        cout<<front->data<<": ";
        if(front->leftNode!=NULL){
            cout<<"L"<<front->leftNode->data<<" ";
            pendingNode.push(front->leftNode);
        }
        if(front->rightNode!=NULL){
            cout<<"R"<<front->rightNode->data<<" ";
            pendingNode.push(front->rightNode);
        }
        cout<<endl;
    }
    
}
void printTree(BinaryTreeNode<int>* root){
    if(root==NULL){
       return ;
    }
    cout<<root->data<<": ";
    if(root->leftNode!=NULL){
        cout<<"L"<<root->leftNode->data<<" ";
    }
    if(root->rightNode!=NULL){
        cout<<"R"<<root->rightNode->data<<" ";
    }
    cout<<endl;
    printTree(root->leftNode);
    printTree(root->rightNode);
}
int main()
{
    BinaryTreeNode<int>*root=takeInputlevelWise();
    printTreeLevelWise(root);
    // deleting tree
    delete root;
return 0;
}