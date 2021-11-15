#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int n,m,k;
    cin>>n>>m>>k;
    int sum=0,a,b=0;

    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a==1){
            sum=sum+1;
            
        }
        if(i<=m-1){
                if(a==1){
                    b=b+1;
            
        } 
            }
    }
    
    if(sum==n){
        cout<<"100"<<endl;
    }
    else if(b==m){
        cout<<k<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    
    }
return 0;
}