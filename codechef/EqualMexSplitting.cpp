// Author: Akshat Khosya
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
#define fs cin.tie(0)
#define ll long long int
#define pb push_back
#define fr(i,n) for(int i=0;i<n;i++)
#define fm(i,n) for(int i=n-1;i>=0;i--)
using namespace std;
void akshat(){
    ll n;
    cin>>n;
    ll arr[n];
    fr(i,n) cin>>arr[i];
    sort(arr,arr+n);
    ll count=0;
    fr(i,n){
        if(arr[i]==0){
            count++;
        }else{
            break;
        }
    }
    cout<<max(count,n-count)<<endl;
   
}
int main()
{
    fast;
    fs;
    int t;
    cin >> t;
    while (t--)
    {
     akshat();
    }
return 0;
}