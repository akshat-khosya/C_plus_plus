#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       ll sum;
       sum=pow(2,n);
       ll arr[n+1];
       ll count=0;
        for (int i = 0; i < n; i++)
        {
            if(i==0 || i==1){
                arr[i]=1;
                count=count+arr[i];
            }
            else{
                arr[i]=i;
                count=count+arr[i];
            }
        }
            
            arr[n]=sum-count;
        
       
          
           for (int i = 0; i < n+1; i++)
           {
               if(i<n){
                   cout<<arr[i]<<" ";
               }
               else{
                   cout<<arr[i]<<endl;
               }
           }
           
        
    }
return 0;
}