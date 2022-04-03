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
    if(y==0){
        cout<<x<<endl;
    }else if(x==y){
        cout<<2*y-1<<endl;
    }else{
        cout<<2*y+x-y<<endl;
    }
    }
return 0;
}