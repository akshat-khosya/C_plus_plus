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
    ll n,r,b;
    cin>>n>>r>>b;
    if(b==1){
        fr(i,r){
            if(i==r/2){
                cout<<"BR";
            }
            else{
                cout<<'R';
            }
        }
        cout<<endl;
        return ;
    }else{
        ll div=r/b;
        fr(i,r){
            
        }
    }
}

void solve(){
ll n,r,b;
cin>>n>>r>>b;
ll a=ceil(r/float(b+1));

ll i=0;
while(n){
    ll a=ceil(r/float(b+1));
while(a--&&r--){
    cout<<"R";
    n--;
}
if(b--){
    cout<<"B";
    n--;
}
}
cout<<endl;
}
int main()
{
    fast;
    fs;
    int t;
    cin >> t;
    while (t--)
    {
     solve();
    }
return 0;
}