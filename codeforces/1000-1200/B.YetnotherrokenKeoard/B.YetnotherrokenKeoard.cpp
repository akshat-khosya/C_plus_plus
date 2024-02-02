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
    string s, res = "";
    cin >> s;
    int n = s.length(), capB = 0, smallB = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
        {
            smallB++;
        }
        else if (s[i] == 'B')
        {
            capB++;
        }
        else
        {
            if (islower(s[i]) && smallB != 0)
            {
                smallB--;
            }
            else if (isupper(s[i]) && capB != 0)
            {
                capB--;
            }
            else
            {
                // cout << "Data " << capB << " " << smallB << " " << s[i] << endl;
                res += s[i];
            }
        }
    }
    reverse(res.begin(), res.end());

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
From last have count of 'b and 'B' and when there value is not zero then delete that number

*/