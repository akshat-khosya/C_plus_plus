#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a = 2, sum = 0;
        if (n <= 2)
        {
            sum = 1;
        }
        else
        {
            while (true)
            {
                if (n == a)
                {
                    
                    sum = a / 2;
                     
                    break;
                }
                else if(n<a){
                    int diff=0;
                    sum = a / 2;
                    diff=a/2-a/4;
                    
                    sum=n-sum+1;
                    if(diff>sum){
                        sum=diff;
                         break;
                    }
                    else{
                         break;
                    }
                    
                   
                }
                else
                {
                    a = a * 2;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}