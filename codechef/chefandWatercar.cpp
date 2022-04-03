#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    ll n,v;
    cin>>n>>v;
    if(v>=n-1){
        ll max=((n-1)*n/2);
        cout<<max<<" "<<n-1<<endl;
    }
    else if(v==1){
        cout<<((n-1)*n)/2<<" "<<((n-1)*n)/2<<endl;
    }
    else if(v<n-1){
        ll max=((n-1)*n/2);
        ll min=0;
        min=((n-v)*(n-v+1))/2;
        min=min+v-1;
        cout<<max<<" "<<min<<endl;
        
        
       
    }
    }
return 0;
}