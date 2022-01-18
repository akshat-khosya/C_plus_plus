#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    int arrx[t];
    int arry[t];
  
    for (int i = 0; i < t; i++)
    {
        cin >> arrx[i];
        cin >> arry[i];
       
    }
   
    int sum=0;
    for (int i = 0; i < t; i++)
    {
        sum=sum+i;
    }
    double ans[sum];
    int count=0;
    for (int i = 0; i < t; i++)
    {
        for (int j = i; j < t; j++)
        {
            if(i==j){

            }else{
                int x=arrx[i]-arrx[j];
                int y=arry[i]-arry[j];
                x=x*x;
                y=y*y;
                ans[count]=sqrt(x+y);
                count++;
            }
        }
        
    }
    sort(ans,ans+count);
    for (int i = 0; i < sum; i++)
    {
        /* code */
    }
    
    cout<<setprecision(11)<<ans[sum-1]<<endl;

    return 0;
}