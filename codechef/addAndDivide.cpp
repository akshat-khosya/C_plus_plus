#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,x=0,y=1;
        cin>>a>>b;
        if(a==b){
           
                cout<<"YES"<<endl;
           
            
        }
        else if(a<b){
            y=b*b;
            if(y%a==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }

        }
        else{
            
            if(a%b==0){
                cout<<"YES"<<endl;
            }
            else{
                while(true){
                    y=b*y;
                    if(y>=a){
                        break;
                    }
                }
               
                if(y%a==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    
    }
return 0;
}