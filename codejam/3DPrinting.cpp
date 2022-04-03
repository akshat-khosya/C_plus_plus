// Author: Akshat Khosya
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
#define fs cin.tie(0)
#define ll long long int
#define pb push_back
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fm(i, n) for (ll i = n - 1; i >= 0; i--)
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
void akshat(ll t)
{
    cout << "Case #" << t + 1 << ": ";
    ll p1[4], p2[4], p3[4];
    fr(i, 4) cin >> p1[i];
    fr(i, 4) cin >> p2[i];
    fr(i, 4) cin >> p3[i];

    ll x1 = 0, x2 = 0, x3 = 0, x4 = 0;

    x1 = min({p1[0], p2[0], p3[0]}, comp);
    x2 = min({p1[1], p2[1], p3[1]}, comp);
    x3 = min({p1[2], p2[2], p3[2]}, comp);
    x4 = min({p1[3], p2[3], p3[3]}, comp);

    ll al[4];
    al[0] = x1;
    al[1] = x2;
    al[2] = x3;
    al[3] = x4;
    
    if (x1 + x2 + x3 + x4 < 1000000)
    {

        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        if (x1 + x2 + x3 + x4 == 1000000)
        {
            cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
        }
        else
        {
            ll dif = x1 + x2 + x3 + x4 - 1000000;
            fr(i, 4)
            {
                if(al[i]<=dif){
                    dif=dif-al[i];
                    al[i]=0;
                }else{
                    al[i]=al[i]-dif;
                    break;
                }
                if(dif==0){
                    break;
                }
                
                
            }
            fr(i, 4)
            {

                cout << al[i] << " ";
            }
            cout << endl;
        }
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