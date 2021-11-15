#include<bits/stdc++.h> 
using namespace std;
int main(){
    int t,a=0,b=0,r,l;
    cin>>t;
    while (t--)
    {
       string str;
       getline(cin,str);
       int n;
       cin>>n;
       string substr;
       cin>>substr;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                substr=str.substr(i,j);
                for(int z=0;z<j-i;z++){
                    if(substr[z]=='a'){
                        a=a+1;
                    }
                    if(substr[z]=='b'){
                        b=b+1;
                    }

                    
                }
                 if(a=b){
                    break;
                    l=i;
                    r=j;
                }
               
            }
             if(a=b){
                  cout<<l<<r<<endl;
                  break; 
                }
                
        }
        if(a=b){
            a=0;
            b=0;
            
        }
        else{
            cout<<"-1"<<"-1"<<endl;
             a=0;
            b=0;
            l=0;
            r=0;

        }
        
    }
    return 0;
}