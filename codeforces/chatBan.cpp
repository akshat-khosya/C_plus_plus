#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k,x;
        cin>>k>>x;
        ll count=0;
        ll sum=0;
        bool vali=false;
        for (int i = 0; i < k; i++)
        {
            if(sum>=x){
                vali=true;
                break;
            }
            count++;
            sum=(i+1)+sum;

        }
        if(vali){
            // mothing
        }
        else{
            for (int i = k+1; i < 2*k; i++)
            {
                if(sum>x){
                vali=true;
                break;
            }
            count++;
            sum=(2*k-i)+sum;
            }
            
        }
        cout<<count<<endl;
        
    }
return 0;
}