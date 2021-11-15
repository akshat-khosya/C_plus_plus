#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t%4==0){
            cout<<"North"<<endl;

        }
        else if(t%4==1){
            cout<<"East"<<endl;
        }
        else if(t%4==2){
            cout<<"South"<<endl;
        }
        else{
            cout<<"West"<<endl;
        }
    }



    return 0;

}