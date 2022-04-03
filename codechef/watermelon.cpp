#include<iostream>
using namespace std;
int main(){
  int weight,t;
  cin>>weight,t;
  if(weight%2==0 && (weight/2)%2==0){

    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

    if(t==2)
        cout<<"NO"<<endl;
    else if(t%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
  return 0;
}
