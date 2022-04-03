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
    string s;
    cin>>s;
    ll i,j;
    ll n= s.size();
    if((s[n-1]-'0')%2==0)
    {
        for(i=0;i<n-1;i++)
        {
            if((s[i]-'0')%2==0)
            {
                cout<<"YES"<<endl; return;
            }
        }
        cout<<"NO"<<endl; return;
    }
     for(i=0;i<n-1;i++)
        {
            if((s[i]-'0')%2==1)
            {
                cout<<"YES"<<endl; return;
            }
        }
        cout<<"NO"<<endl; return;
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