#include<bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode * left;
    BinaryTreeNode* right;
    BinaryTreeNode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL:
    } 
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};
BinaryTreeNode<int>* takeInput(){
    BinaryTreeNode<int>*root;
}
void printTree(BinaryTreeNode<int>* root){
    
}
int main()
{
    BinaryTreeNode<int>*root=takeInput();
return 0;
}