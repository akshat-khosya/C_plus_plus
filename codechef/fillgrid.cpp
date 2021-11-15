#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        int arr[n][n];
        if(n%2==0){
            for(int j=0;j<n;j++){
                for(int z=0;z<n;z++){
                    arr[j][z]=-1;
                    
                }
                
            }
        }
        else{
             for(int j=0;j<n;j++){
                for(int z=0;z<n;z++){
                    if(z==j){
                        arr[j][z]=-1;
                    
                    }
                    else{
                        arr[j][z]=1;
                    }
                    
                }
                
            }
        }
        for(int j=0;j<n;j++){
                for(int z=0;z<n;z++){
                   cout<<arr[j][z];
                    
                }
                cout<<endl;
                
            }
    }
    return 0;
}