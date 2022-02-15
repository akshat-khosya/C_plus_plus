#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        if (p + b + c > (p + q + r) / 2)
        {
            cout << "YES" << endl;
        }
        else if (a + q + c > (p + q + r) / 2)
        {
            cout << "YES" << endl;
        }
        else if (a + b + r > (p + q + r) / 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
        return 0;
    
}
