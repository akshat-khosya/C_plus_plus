#include<iostream>
#include<fstream>
using namespace std;
typedef long long ll;
int main()
{
    fstream myFile;
    myFile.open("akshat.txt",ios::trunc | ios::out | ios::in);
    if(!myFile){
        cout<<"File creation failed"<<endl;
    }else{
        cout<<"New file created"<<endl;
        myFile<<"Learning File handling";
        myFile.close();
    }
return 0;
}