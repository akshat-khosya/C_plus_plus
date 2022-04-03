#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    char str[7];
    cin>>str;
    if(str[num-1]=='o'){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}