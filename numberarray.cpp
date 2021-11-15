#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num=0;
     for(int i=n-1;i>0;i--){
        num=arr[i] +10*(n-1-i) +num;
    }
    cout<<num<<endl;
    
    return 0;
}