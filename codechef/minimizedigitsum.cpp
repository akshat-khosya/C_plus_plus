#include<iostream>
#include<climits>
using namespace std;
int main(){
    int q,B,l,r,n,CN,rem,sum=0;
    cin>>q;
    

     for(int i=0;i<q;i++){
       int min=INT_MAX;
        cin>>CN>>l>>r;
        
        int minB=l;
       
        for( int j=l;j<=r;j++){
            B=j;
            n=CN;
            while (n>0)
            {
               
                rem=n%B;
                sum=sum+rem;
                 n=n/B;
                 if(sum>min){
                     break;
                 }
                 
            }
            if(sum<min){
                minB=B;
                min=sum;
            }
                 if(min==1){
                     break;
                 }
            sum=0;
           
        }
        
            cout<<minB<<endl;
        
        
    
    }
    return 0;
    
}