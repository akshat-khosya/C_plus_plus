#include<iostream>
#include<fstream>
using namespace std;
typedef long long ll;
int main()
{
    char arr[100];
    char arr1[100];
    cout<<"Enter name"<<endl;
    cin.getline(arr,100);
    ofstream myfile("xyz.txt",ios::app);
   
    myfile<<arr;
    myfile.close();
    cout<<"File write operation performed"<<endl;
    cout<<"Reading from file operation started"<<endl;
    ifstream obj("xyz.txt");
    
    obj.getline(arr1,100);
    obj.close();
    cout<<arr1<<endl;
return 0;
}