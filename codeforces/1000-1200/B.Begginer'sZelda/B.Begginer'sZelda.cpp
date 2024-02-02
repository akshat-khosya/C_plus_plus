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
    map<int, vector<int>> m;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        m[u].push_back(v);
        m[v].push_back(u);
    }
    int k = 0;
    for (auto a : m)
    {
        if (a.second.size() == 1)
        {
            k++;
        }
    }
    cout << (k + 1) / 2 << endl;
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
Observer pattern
ans = (k+1)/2 where k is leaf node
*/