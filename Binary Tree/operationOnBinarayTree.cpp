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
int numNodes(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    return 1 + numNodes(root->leftNode) + numNodes(root->rightNode);
}
BinaryTreeNode<int>* searchNode(BinaryTreeNode<int>* root,int data){

    if(root==NULL){
        return NULL;
    }
    if(root->data==data){
        return root;
    }
    BinaryTreeNode<int>* temp=searchNode(root->leftNode,data);
    if(temp!=NULL){
        return temp;
    }
    temp=searchNode(root->rightNode,data);
    if(temp!=NULL){
        return temp;
    }
    return temp;
    

}
int heightOfTree(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    if(root->leftNode==NULL){
        return 1;
    }
    if(root->rightNode==NULL){
        return 1;
    }
    
    int h1=heightOfTree(root->leftNode);
    int h2= heightOfTree(root->rightNode);
    if(h1>h2){
        return 1+h1;
    }else{
        return 1+h2;
    }
    
}
void mirroTree(BinaryTreeNode<int>* root){
    if(root==NULL){
        return ;
    }
    BinaryTreeNode<int>* temp=root->leftNode;
    root->leftNode=root->rightNode;
    root->rightNode=temp;
    mirroTree(root->leftNode);
    mirroTree(root->rightNode);
}
// Tree
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
/* 
                            1
                        /       \
                        2        3
                    /       \   /   \
                    4       5   6   7
                               /  \
                               8    9

*/

int main()
{
    BinaryTreeNode<int>*root=takeInputlevelWise();
    printTreeLevelWise(root);
    // cout<<"Number of nodes"<<endl;
    // cout<<numNodes(root)<<endl;
    // cout<<"Enter the data who want to search"<<endl;
    // int data;
    // cin>>data;
    // if(searchNode(root,data)!=NULL){
    //     cout<<"True"<<endl;
    // }else{
    //     cout<<"False"<<endl;
    // }
    // deleting tree
    // cout<<heightOfTree(root)<<endl;
    mirroTree(root);
    printTreeLevelWise(root);
    delete root;
return 0;
}