#include<iostream>
using namespace std;
int main(){
    
    int t;
    cin>>t;
  for(int j=0;j<t;j++){
        char ch[100000];
        cin>>ch;
        int a=-1,b=0,c=0;
        for(int i=0;i<100000;i++){
            
            if(ch[i]=='1'){
                b=b+1;
            }
            if(ch[i]=='0'){
                a=a+1;
            }
            if(ch[i]=='2'){
                c=c+1;
            }


        }
       
        if(a==0 && c==0){
            cout<<"0"<<endl;
        }
        
        else if(b==0 && c==0){
            cout<<"1"<<endl;
        }
        else if(a==0 && b==0){
            cout<<"0"<<endl;
        }
        else if(b==1 || a==1){
            cout<<"1"<<endl;
        }
        else if(b>1 && a>1){
            cout<<"2"<<endl;
        }
         
        
        

  
    
    }
    return 0;
}