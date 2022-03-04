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
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll sum1=0,sum2=0;
    for (int i = 0; i < n; i++)
    {
        if(i>(n/2)){
            sum2=sum2+arr[i];
        }else{
            sum1=sum1+arr[i];
        }
    }
    
    if(sum2>sum1){
        cout<<"YES"<<endl;
    }else{
        if(sum2==sum1){
            if(n%2==0&& n!=2){
                
                cout<<"YES"<<endl;
            }else if(n%2==0 && n>3){

                if(sum2-arr[n/2+1]>sum1-arr[n/2]){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
}
int main()
{
    fast;
    fs;
    ll t;
    cin >> t;
    while (t--)
    {
     akshat();
    }
return 0;
}