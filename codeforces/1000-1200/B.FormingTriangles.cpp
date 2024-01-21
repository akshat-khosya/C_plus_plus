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
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    if (n < 3)
    {
        cout << 0 << endl;
        return;
    }

    long long count = 0, i = 0;
    for (auto a : m)
    {
        if (a.second >= 3)
        {
            count += (1LL * (a.second) * (a.second - 1) * (a.second - 2)) / 6;
        }
        if (a.second >= 2)
        {
            count += (1LL * (a.second) * (a.second - 1) * (i)) / 2;
        }
        i += a.second;
    }

    cout << count << endl;
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
/*
There are 3 sides.
1. If all sides are different then triangle cannot be formed.
2. If all sides are equal then choose n from 3.
3. If 2 sides are equal then choose n from 2 * sum of smaller sides then current side.
4. Store freq in Map
*/