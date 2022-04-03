#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll l = s.length();
        ll sum = s[0] - '0' + s[1] - '0', index = 0;

        for (ll i = 0; i < l; i++)
        {

            if (s[i] - '0' + s[i + 1] - '0' >= 10)
            {
                sum = s[i] - '0' + s[i + 1] - '0';
                index = i;
            }
            
        }

        if (sum >= 10)
        {

            for (ll i = 0; i < index; i++)
            {
                cout << s[i];
            }
            cout << s[index] - '0' + s[index + 1] - '0';
            for (int i = index + 2; i < l; i++)
            {
                cout << s[i];
            }
        }
        else
        {
            for (ll i = 0; i < l; i++)
            {
                if (i == 0)
                {
                    cout << s[0] - '0' + s[1] - '0';
                }
                else if (i == 1)
                {
                }
                else
                {
                    cout << s[i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}