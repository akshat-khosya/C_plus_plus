#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==0 && b==0 && c==0){
        cout<<"1"<<" "<<"1"<<" "<<"1"<<endl;
    }
    else{
        if(a>=b){
        if(a>=c){
            cout<<"0"<<" "<<a-b+1<<" "<<a-c+1<<endl;
        }
        else if(c>a){
             cout<<c-a+1<<" "<<c-b+1<<" "<<"0"<<endl;
        }
    }
    else if(b>=a){
        if(b>=c){
             cout<<b-a+1<<" "<<"0"<<" "<<b-c+1<<endl;
        }
        else if(c>=b){
             cout<<c-a+1<<c-b+1<<"0"<<endl;
        }
    }
    
    }
    
    }
return 0;
}