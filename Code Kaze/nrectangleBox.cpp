#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int n;
        cin>>n;
		int arr[n],aee[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cin>>aee[i];
        }
    int validate=0;
    int vs[n];
        for(int i=0;i<n;i++){
        
            if(i==0){
                vs[i]=arr[i]>aee[i]?arr[i]:aee[i];
            }
            if(vs[i-1]>=arr[i] && vs[i-1]>=aee[i]){
                if(arr[i]>=aee[i]){
                    vs[i]=arr[i];
                }else{
                    vs[i]=aee[i];
                }
            }else if(vs[i-1]>=aee[i]){
                vs[i]=aee[i];
            }else if(vs[i-1]>=arr[i]){
                vs[i]=arr[i];
            }else{
                validate=1;
                break;
            }
        }
    
    if(validate==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}