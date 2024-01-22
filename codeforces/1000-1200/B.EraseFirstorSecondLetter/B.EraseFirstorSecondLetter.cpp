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
    int n, sum = 0;
    cin >> n;
    string s;
    cin >> s;
    set<char> visited;
    for (int i = 0; i < n; i++)
    {
        visited.insert(s[i]);
        sum += visited.size();
    }
    cout << sum << endl;
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
ababaa
babaa (a->1) 1
abaa (a->1,b->1) 2
baa (a->1,b->1) 2
aa (a->1,b->1) 2
a (a->1,b->1) 2
total 2+2+2+2+1=9
*/