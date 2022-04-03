#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N;
        cin>>N;
        
       if(N%4==0){
            int arr1[N/2];
            int arr2[N/2];
            int j=1;
                int z=0;
            while(true){
                
                arr1[z]=j;
                arr1[z+1]=N+1-j;
                arr2[z]=j+1;
                arr2[z+1]=N-j;
                z=z+2;
                j=j+2;
                
                
                
                if(z>=N){
                    break;
                }
                
                
            }
            cout<<"YES"<<endl;
            for(int j=0;j<N/2;j++){
                cout<<arr1[j]<<" ";
                
            }
            cout<<""<<endl;
            for(int j=0;j<N/2;j++){
                cout<<arr2[j]<<" ";
                
            }
            cout<<""<<endl;
           
        }
        else{
            cout<<"NO"<<endl;
        }

        
    }
    return 0;
}