#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0,i,j;
        string s;
        cin>> n ;
        cin>>s;
        sum=0;
        for(i=0;i<n-1;i++)
        {
            for( j=i+1;j<i+10;j++)
            {
                if((j-i)==abs(s[j]-s[i]))
                    sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}