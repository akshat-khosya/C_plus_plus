#include<bits/stdc++.h>
using namespace std;
int nthFibonacciNumber(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return nthFibonacciNumber(n-1)+nthFibonacciNumber(n-2);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<nthFibonacciNumber(n)<<endl;
return 0;
}