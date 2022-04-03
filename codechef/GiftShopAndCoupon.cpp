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
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    fr(i,n) cin>>arr[i];
    int index=0,check=0;
    double sum=0;
    int nu=0;
    fr(i,n){
        if(sum+arr[i]>=k){
            check=1;
            index=i;
            break;
        }else{
            sum+=arr[i];
            nu++;
        }
    }
    if(check){
        double temp=ceil((double)arr[index]/2);
        sum+=temp;
        if(sum<=k){
            nu+1;
        }
    }
    cout<<nu<<endl;
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