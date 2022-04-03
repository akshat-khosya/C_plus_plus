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
    int s1,s2;
    cin>>s1>>s2;
    int count=0;
    for(int i=s1;i<=s2;i++){
        auto s = std::to_string(i);
        ll p=1,sum=0;
        for(int j=0;j<s.length();j++){
            p=p*(s[j]-'0');
            sum=sum+(s[j]-'0');
        }
        if(p%sum==0){
            
            count++;
        }

    }
    cout<<"Case #"<<t+1<<": "<<count<<endl;
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