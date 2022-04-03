// Author: Akshat Khosya
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
#define fs cin.tie(0)
#define ll long long int
#define pb push_back
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fm(i, n) for (ll i = n - 1; i >= 0; i--)
using namespace std;
void akshat(ll t)
{
    cout << "Case #" << t + 1 << ": " << endl;
    ll x, y;
    cin >> x >> y;
    for (ll i = 0; i < x* 2 + 1; i++)
    {
        for (ll j = 0; j < y * 2 + 1; j++)
        {
            if(i==0 || i==1){
                if(j==1 || j==0){
                    cout<<".";
                }
                else{
                    if(j%2==0){
                        if(i%2==0){
                            cout<<"+";
                        }else{
                            cout<<"|";
                        }
                    }else{
                        if(i%2==0){
                            cout<<"-";
                        }else{
                            cout<<".";
                        }
                    }
                }
            }else{
                if(j%2==0){
                        if(i%2==0){
                            cout<<"+";
                        }else{
                            cout<<"|";
                        }
                    }else{
                        if(i%2==0){
                            cout<<"-";
                        }else{
                            cout<<".";
                        }
                    }
            }
            
        }
        cout<<endl;
    }
}

int main()
{
    fast;
    fs;
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        akshat(i);
    }
    return 0;
}