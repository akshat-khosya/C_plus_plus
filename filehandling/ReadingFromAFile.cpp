#include<iostream>
#include<fstream>
using namespace std;

typedef long long ll;
int main()
{
    fstream myFile;
    myFile.open("akshat.txt",ios::in);
    if(!myFile){
        cout<<"File creation failed"<<endl;
    }else{
        cout<<"file is opend"<<endl;
        char ch;
        while(!myFile.eof()){
            myFile>>ch;
            cout<<ch;
        }
        myFile.close();
        return 0;
    }
return 0;
}