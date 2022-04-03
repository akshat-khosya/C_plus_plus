#include <iostream>

using namespace std;

int main()
{
    // Name:Akshat Khosya
    // Roll No.: 20106
    cout<<"Enter which value you are entering?\n1.F\n2.C"<<endl;
   char choice;
   cin>>choice;
   int value;
   cout<<" Enter value: ";
   cin>>value;

   if(choice=='F'){
       float ans= ((9*value)/float(5))+32;
       cout<<ans<<endl;
   }else{
       float ans=( 5*(value-32))/float(5);
       cout<<ans<<endl;
   }
}