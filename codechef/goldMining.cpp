#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        x<=(n+1)*y?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
return 0;
}