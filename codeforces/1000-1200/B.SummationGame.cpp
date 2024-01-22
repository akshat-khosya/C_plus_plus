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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n);
    fr(i, n) cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    vector<int> prefixSum(n + 1);
    prefixSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + v[i - 1];
    }
    int sum = INT_MIN;
    for (int i = 0; i <= k; i++)
    {
        sum = max(sum, prefixSum[n] - 2 * (prefixSum[min(i + x, n)]) + prefixSum[i]);
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
1. Bob Want to maximize the sum and alice want to minimize the sum.
2. Alice will make all element negative form highest order.
3. Now sort the array and calculate prefix sum.
4. for every k check for max sum and return it.
*/