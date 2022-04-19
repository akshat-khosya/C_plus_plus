#include <bits/stdc++.h>
using namespace std;
template <typename T>
class BinarySearchTree
{
public:
    T data;
    BinarySearchTree *left;
    BinarySearchTree *right;
    BinarySearchTree(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BinarySearchTree<int> *takeInput()
{
    // cout << "Enter the root BinarySearchTree data" << endl;
    int data;
    cin >> data;
    BinarySearchTree<int> *root = new BinarySearchTree<int>(data);
    queue<BinarySearchTree<int> *> q;
    q.push(root);
    while (q.size() != 0)
    {
        BinarySearchTree<int> *temp = q.front();
        q.pop();
        //  cout << "Enter the left BinarySearchTree of " << temp->data << endl;
        int lside;
        cin >> lside;
        if (lside != -1)
        {
            BinarySearchTree<int> *child = new BinarySearchTree<int>(lside);
            temp->left = child;
            q.push(child);
        }

        // cout << "Enter the right BinarySearchTree of " << temp->data << endl;
        int rside;
        cin >> rside;
        if (rside != -1)
        {
            BinarySearchTree<int> *child = new BinarySearchTree<int>(rside);
            temp->right = child;
            q.push(child);
        }
    }
    return root;
}
// key check
bool checkKey(BinarySearchTree<int> *root, int key)
{

    if (root == NULL)
    {
        return 0;
    }
    bool ans;
    if (key > root->data)
    {
        ans = checkKey(root->right, key);
    }
    if (key < root->data)
    {
        ans = checkKey(root->left, key);
    }
    if (key == root->data)
    {
        ans = 1;
    }
    return ans;
}
vector<int> rangePrint(BinarySearchTree<int>* root,int init,int final){
    static vector<int> v;
    if (root == NULL)
    {
        return v;
    }
    v=rangePrint(root->left,init,final);
    if(root->data>=init && root->data<=final){
        v.push_back(root->data);
    }
    v=rangePrint(root->right,init,final);
    return v;
}
int main()
{
    BinarySearchTree<int> *root = takeInput();
    //  cout<<"Enter the value you want to check"<<endl;
    // int key;
    // cin>>key;
    // bool keyres=checkKey(root,key);
    // keyres?cout<<"true":cout<<"false";
    // cout<<endl;
    int init,final;
    cin>>init>>final;
    vector<int> v=rangePrint(root,init,final);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}