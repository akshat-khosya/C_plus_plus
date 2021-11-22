#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int x,y;
    cin>>x>>y;
    if(x%2==0 && y%2==0){
        cout<<x/2<<" "<<y/2<<endl;
    }else if(x%2==0){
        cout<<"-1"<<" "<<"-1"<<endl;
    }
    else if(y%2==0){
        cout<<"-1"<<" "<<"-1"<<endl;
    }else if(x%2!=0 && y%2!=0){
        int a,b;
        if(x>y){
            cout<<(x+y)/2-(y)<<" "<<y<<endl;
        }else{
            cout<<x<<" "<<(x+y)/2-(x)<<endl;
        }
        
    }
    }
return 0;
}