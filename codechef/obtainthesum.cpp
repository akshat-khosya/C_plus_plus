#include<iostream>
using namespace std;
int main(){
     int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long  N,S;
        cin>>N>>S;
        
        
        long long sum;
        sum=N*(N+1)/2;
        long long sum1;
        sum1=sum-S;
        if(sum1>>1 && sum1<<N){
            cout<<sum1<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        
    }
    return 0;
}