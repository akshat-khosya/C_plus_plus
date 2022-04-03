#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    long long P,a,b,c,x,y;
    cin>>P>>a>>b>>c>>x>>y;
    long long A,C;
    A=b+x*a;
    C=c+y*a;
    A>C?cout<<P/C<<endl:cout<<P/A<<endl;
    }
return 0;
}