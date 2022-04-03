#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
       this->data=data;
       next= NULL; 
    }
};
int main(){
    // statically

    Node n1(1);
    Node*head=&n1;
    
    Node n2(2); 
    n1.next=&n2;
    
     
return 0;
}  