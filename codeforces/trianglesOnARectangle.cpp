#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll x1, x2, y1, y2;
        cin >> x1;
        ll arrayx1[x1];
        for (ll i = 0; i < x1; i++)
        {
            cin >> arrayx1[i];
        }

        cin >> x2;
        ll arrayx2[x2];
        for (ll i = 0; i < x2; i++)
        {
            cin >> arrayx2[i];
        }
        cin >> y1;
        ll arrayy1[y1];
        for (ll i = 0; i < y1; i++)
        {
            cin >> arrayy1[i];
        }
        cin >> y2;
        ll arrayy2[y2];
        for (ll i = 0; i < y2; i++)
        {
            cin >> arrayy2[i];
        }
        sort(arrayx1, arrayx1 + x1);
        sort(arrayx2, arrayx2 + x2);
        sort(arrayy1, arrayy1 + y1);
        sort(arrayy2, arrayy2 + y2);
        ll maxx1, maxx2, maxy1, maxy2;
        maxx1 = arrayx1[x1 - 1] - arrayx1[0];
        maxx2 = arrayx2[x2 - 1] - arrayx2[0];
        maxy1 = arrayy1[y1 - 1] - arrayy1[0];
        maxy2 = arrayy2[y2 - 1] - arrayy2[0];
       
        ll area1=max(maxx1,maxx2)*y;
        ll area2=max(maxy1,maxy2)*x;
        cout<<max(area1,area2)<<endl;


        
    }
    return 0;
}