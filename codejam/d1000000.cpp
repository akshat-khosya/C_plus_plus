// Author: Akshat Khosya
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
#define fs cin.tie(0)
#define ll long long int
#define pb push_back
#define fr(i,n) for(ll i=0;i<n;i++)
#define fm(i,n) for(ll i=n-1;i>=0;i--)
using namespace std;
void akshat(ll t){
    cout<<"Case #"<<t+1<<": ";
    ll n;
    cin>>n;
    ll arr[n];
    fr(i,n) cin>>arr[i];
    sort(arr,arr+n);
    ll count=0;
    ll track=1;
    for(ll i=0;i<n;i++){
        if(arr[i]>=track){
            
            count++;
            track++;
        }else{
          
        }
    }
     cout<<count<<endl;
  
}
int main()
{
    fast;
    fs;
    ll t;
    cin >> t;
    for(ll i=0;i<t;i++){
        akshat(i);
    }
return 0;
}