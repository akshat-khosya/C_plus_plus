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
    string s;
    cin >> s;
    int n = s.length(), ct0 = 0, ct1 = 0;
    fr(i, n)
    {
        if (s[i] == '0')
            ct0++;
        else
            ct1++;
    }
    fr(i, n)
    {
        if ((s[i] == '0' ? ct1 == 0 ? true : false : ct0 == 0 ? true
                                                              : false))
        {

            cout << n - i << endl;
            break;
        }
        if (n - 1 == i)
        {
            cout << 0 << endl;
        }
        if (s[i] == '0')
        {
            ct1--;
        }
        else
        {
            ct0--;
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