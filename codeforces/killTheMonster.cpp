// Author: Akshat Khosya
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
#define fs cin.tie(0)
#define ll long long int
#define pb push_back
#define fr(i,n) for(int i=0;i<n;i++)
#define fm(i,n) for(int i=n-1;i>=0;i--)
using namespace std;
void akshat(){
    ll hc,dc,hm,dm,k,w,a;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    double rc=0,rm=0;
    for (ll i = 0; i <=k; i++)
    {
        double hcnew=hc+i*a;
        double dcnew=dc+w*(k-i);
        rc=ceil(hcnew/dm);
        rm=ceil(hm/dcnew);
        if(rc>=rm){
            cout<<"YES"<<endl;
            return;
        }
       
    }
     cout<<"NO"<<endl;
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