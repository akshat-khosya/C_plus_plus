#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N,A,B,C;
        cin>>N>>A>>B>>C;
        if(B>C && B>A){
            if(A+C>=B){
                if(B>=N){
                     cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
               
            }
            else{
                if(A+C>=N){
                     cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else{
             if(B>=N){
                     cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
        }
        
    }
    return 0;
}