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
    ll x,arr[3];
    cin>>x;
    fr(i,3) cin>>arr[i];
    sort(arr,arr+3);
    cout<<arr[0]*(x-1)+arr[1]<<endl;
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