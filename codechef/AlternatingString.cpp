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
    ll t;
    cin>>t;
    ll e=0,o=0;
    char n[t];

    fr(i,t){
        cin>>n[i];
        if(n[i]=='1'){
            o++;
        }else{
            e++;
        }
    }
    if(o>e){
        cout<<e*2+1<<endl;
    }else if(e>o){
        cout<<o*2+1<<endl;
    }else if(o==e){
        cout<<e*2<<endl;
    }else{
        cout<<t<<endl;
    }
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