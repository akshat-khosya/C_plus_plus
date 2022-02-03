#include<iostream>
using namespace std;
int main(){
     //Name:Akshat Khosya
    //Roll:20106
   int n,max;
    cout<<"Enter the length of an array:"<<endl;
    cin>>n;
     int a[n];
 for (int i = 0; i < n; i++)
 {
     
     cin>>a[i];

 }
 max=a[0];
 for (int i = 0; i < n; i++)
 {
  if (max<a[i])
  {
      max=a[i];
  }
  
 }
 cout<<"maximum value:"<<max;
    
    return 0;
}