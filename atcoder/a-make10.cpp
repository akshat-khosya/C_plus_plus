#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int j=0;j<T;j++){
        long long  N2,N3,N4;
        cin>>N2>>N3>>N4;
        long long num=0;
        while (N2>=5 || (N2>=2 && N3>=2) || (N3>=2 && N4>=1) || (N4>=2 && N2>=1) || (N2>=3 && N4>=1 ))
        {
           
            if(N3>=2 && N4>=1){
                
                long long p,i;
                p=N3/2;
                i=N4/1;
                if(p>i){
                    num=num+i;
                    N3=N3-i*2;
                    N4=N4-i;
                }
                else{
                    num=num+p;
                    N3=N3-p*2;
                    N4=N4-p;
                }
            }
            if(N4>=2 && N2>=1){
                long long p,i;
                p=N4/2;
                i=N2/1;
                if(p>i){
                    num=num+i;
                    N2=N2-i;
                    N4=N4-i*2;
                }
                else{
                    num=num+p;
                    N2=N2-p;
                    N4=N4*2-p;
                }
               
            }
             if(N2>=2 && N3>=2){
                 long long p,i;
                p=N3/2;
                i=N2/2;
                if(p>i){
                    num=num+i;
                    N3=N3-i*2;
                    N2=N2-i*2;
                }
                else{
                    num=num+p;
                    N3=N3-p*2;
                    N2=N2-p*2;
                }
                
                
            }
             if(N2>=3 && N4>=1){
                 long long p,i;
                p=N2/3;
                i=N4/1;
                if(p>i){
                    num=num+i;
                    N2=N2-i*3;
                    N4=N4-i;
                }
                else{
                    num=num+p;
                    N2=N2-p*3;
                    N4=N4-p;
                }
               
            }
            if(N2>=5){
               long long p;
                p=N2/5;
                
                 num=num+p;
                 N2=N2-p*5;
               
                
            }
        }
        cout<<num<<endl;
        
    }
    return 0;
}