#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    char seq[n];
    char ad[n];
    cin>>seq;
   for(int i=0;i<n;i++){
        ad[i]=seq[i];
    }
    for(int i=0;i<t;i++){
        char c=0;
        for(int j=0;j<n;j++){
            if(ad[j]=='G'){
                if(ad[j-1]=='B'){
                c=ad[j-1];
                seq[j-1]=seq[j];
                seq[j]=c;
                }
                
            }
        }
      for(int i=0;i<n;i++){
        ad[i]=seq[i];
    }
    }
    for (int i = 0; i < n; i++)
    {
       cout<<seq[i];
    }
    

    return 0;
}