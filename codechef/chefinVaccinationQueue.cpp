#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
       int P,X,Y,N;
       cin>>N>>P>>X>>Y;
       int arr[N];
       for(int i=0;i<N;i++){
           cin>>arr[i];
       }
       int sum=0;
       for(int i=0;i<P;i++){
           if(arr[i]==0){
               sum=sum+X;
           }
           else{
               sum=sum+Y;
           }
       }  
       cout<<sum<<endl;

        
    }
    return 0;
}