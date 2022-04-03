#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[0]=='0' && i==0){
                sum=sum+1;
            }
            else if(s[i]=='0' && s[i-1]=='1'){
                sum=sum+1;

            }
            else if(s[i]=='1' && s[i-1]=='0'){
                sum=sum+1;
            }
            
        }
        cout<<sum<<endl;
    
    }
return 0;
}