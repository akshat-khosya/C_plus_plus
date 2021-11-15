#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x%2==0){
            if(y%2!=0){
                cout<<"YES"<<endl;
            }
            else if(y%2==0){
                cout<<"YES"<<endl;
            }
            else{
               cout<<"NO"<<endl; 
            }
            
        }else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}