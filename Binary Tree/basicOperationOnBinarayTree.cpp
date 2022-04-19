#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node *left;
    Node *right;
    Node(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node<int> *takeInput()
{
    cout << "Enter the root Node data" << endl;
    int data;
    cin >> data;
    Node<int> *root = new Node<int>(data);
    queue<Node<int> *> q;
    q.push(root);
    while (q.size() != 0)
    {
        Node<int> *temp = q.front();
        q.pop();
        cout << "Enter the left node of " << temp->data << endl;
        int lside;
        cin >> lside;
        if (lside != -1)
        {
            Node<int> *child = new Node<int>(lside);
            temp->left = child;
            q.push(child);
        }

        cout << "Enter the right node of " << temp->data << endl;
        int rside;
        cin >> rside;
        if (rside != -1)
        {
            Node<int> *child = new Node<int>(rside);
            temp->right = child;
            q.push(child);
        }
    }
    return root;
}
void inorder(Node<int> *root)

{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}
int main()
{
    Node<int> *root = takeInput();
    vector<int> v;
    inorder(root);
    return 0;
}