#include<iostream>
using namespace std;
int main(){
   
    int year;
    cin>>year;
    while (true)
    {
        year++;
         int a4,a3,a2,a1;
         a1=year%10;
         a2=year/10%10;
         a3=year/100%10;
         a4=year/1000%10;
         if(a1!=a2 && a1!=a3 && a1!=a4 && a2!=a3 && a2!=a4 && a3!=a4){
             cout<<year<<endl;
             break;
         }
    }
    
    
   
    


    return 0;
}