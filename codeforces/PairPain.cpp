

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
    ll arr[n];
    fr(i, n) cin >> arr[i];
    ll count = 0;
    ll even = 0;
    fr(i, n)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        if (arr[i] == 2)
        {
            even++;
        }
    }

    if (count == 0)
    {
        if (even == 0 || even==1)
        {
            cout << 0 << endl;
        }
       
        else 
        {
           cout<<(even-1)*(even)/2<<endl;
        }
    }
    else if(count==1){
       if (even == 0 ||even==1)
        {
            cout << n-1 << endl;
        }
        else 
        {
            
           cout<<(even-1)*(even)/2 + n-1<<endl;
        } 
    }
    else
    {
        ll sum = 0;
        for (ll i = 0; i < count; i++)
        {
            sum = sum + n - 1;
            n--;
        }
        if (even == 0 && even==1)
        {
            cout << sum << endl;
        }
        else 
        {
           cout<<(even-1)*(even)/2 + sum<<endl;
        }
        
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