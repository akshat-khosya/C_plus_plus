#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, a, b,m,sum1=0,sum2=0,i=0;
    cin >> k;
    cin >> a >> b;
    while (a > 0)
    {
        m = a % 10;
        sum1 = sum1 + m*pow(k,i);
        i++;
        a = a / 10;

    }
    m=0;
    i=0;
    while (b > 0)
    {
        m = b % 10;
        sum2 = sum2 + m*pow(k,i);
        i++;
        b = b / 10;

    }
    
    cout<<sum1*sum2<<endl;
    return 0;
}