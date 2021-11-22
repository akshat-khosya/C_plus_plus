#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int c;
        if(a<=n/2  && b>n/2 ){
            
            
            
                for (int i = 0; i < n; i++)
                {
                    cout<<i+1<<" ";
                }
                
            
            cout<<endl;
        
        }else if(b<=n/2  && a>n/2 ){
            for (int i = n; i > 0; i--)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
return 0;
}