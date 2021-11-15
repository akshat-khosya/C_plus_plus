#include<iostream>
using namespace std;
int main(){
    char br[200];
    cin>>br;
    for (int i = 0; i < 200; i++)
    {
       if(br[i]=='.'){
           cout<<"0";
       }
       else if(br[i]=='-'){
           if(br[i+1]=='-'){
               cout<<"2";
               i++;
           }
           else if(br[i+1]=='.'){
               cout<<"1";
               i++;
           }
       }
    }
    


    return 0;
}