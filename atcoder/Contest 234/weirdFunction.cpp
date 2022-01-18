#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int polynomial(int t){
    return t*t +2*t+3;
}
int main()
{
    int t;
    cin>>t;
    int res=polynomial(polynomial(polynomial(t)+t)+polynomial(polynomial(t)));
    cout<<res<<endl;
return 0;
}