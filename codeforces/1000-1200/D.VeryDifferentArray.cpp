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
    int n, m;
    cin >> n >> m;
    vector<int> nV(n), mV(m);
    fr(i, n) cin >> nV[i];
    fr(i, m) cin >> mV[i];
    sort(nV.begin(), nV.end());
    sort(mV.begin(), mV.end(), greater<int>());
    long long sum = 0;
    int i = 0, j = 0, count = 0;
    while (count < n)
    {
        count++;
        if (abs(mV[i] - nV[j]) >= abs(nV.back() - mV.back()))
        {
            sum += abs(mV[i] - nV[j]);
            j++;
            i++;
        }
        else
        {
            sum += abs(nV.back() - mV.back());
            nV.pop_back();
            mV.pop_back();
        }
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
1. sort both array
2. reverse the b array
3. compare diff from first and last and move to next
*/