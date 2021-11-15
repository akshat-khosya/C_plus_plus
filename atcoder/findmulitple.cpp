#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,a,b;
    cin>>A>>B>>C;
    a=A/C;
    b=B/C;
    
    if(A%C==0 || B%C==0){
            cout<<A<<endl;
        }
    else if(b-a>0){
       
        cout<<(a+1)*C<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}   