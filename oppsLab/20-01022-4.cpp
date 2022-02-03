#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    // Name:Akshat Khosya
    // Roll No.: 20106
    int array[5];
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
            cin>>array[i];
            sum=sum+array[i];
    }
    cout<<"The sum of 5 number is: "<<sum<<" The average of 5 number is: "<<sum/float(5)<<endl;


    
return 0;
}