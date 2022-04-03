#include<iostream>
using namespace std;
int main(){
    int num,A,B,N,min=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>N>>A>>B;
        char bin[N];
        cin>>bin;
        for(int j=0;j<N;j++){
            if(bin[j]=='1'){
                min=min+B;
            }
            else if(bin[j]=='0'){
                min=min+A;
            }
        }
        cout<<min<<endl;
        min=0;
    }





    return 0;
}