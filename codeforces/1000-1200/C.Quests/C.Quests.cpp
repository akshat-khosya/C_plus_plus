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
    int n, k, sum = 0, repeatSum = 0, res = 0;
    cin >> n >> k;
    vector<int> a(n), b(n), c(n, 0);
    fr(i, n) cin >> a[i];
    fr(i, n) cin >> b[i];
    fr(i, min(n, k))
    {
        sum += a[i];
        repeatSum = max(repeatSum, b[i]);
        res = max(res, sum + (k - i - 1) * repeatSum);
    }
    cout << res << endl;
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
We want to find maximum of sum that is
Sum of i=0 to i=x --> a[i]+(k-1)*max(b[0]->b[1]);
*/