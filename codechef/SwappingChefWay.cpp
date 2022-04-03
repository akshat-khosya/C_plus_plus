// Author: Akshat Khosya
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
#define fs cin.tie(0)
#define ll long long int
#define pb push_back
#define fr(i, n) for (int i = 0; i < n; i++)
#define fm(i, n) for (int i = n - 1; i >= 0; i--)
using namespace std;
void akshat()
{
    ll n;
    cin >> n;
    char st[n];
    char sq[n];
    fr(i, n) { cin >> st[i]; sq[i]=st[i]; }
    sort(st,st+n);
    fr(i,n/2){
        if(sq[i]>=sq[n-i-1]){
            int temp=sq[n-i-1];
            sq[n-i-1]=sq[i];
            sq[i]=temp;
        
        }
    }
    fr(i,n){
       
        if(st[i]==sq[i]){

        }else{
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
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