#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int a,b,c,d,sum;
    cin>>a>>b>>c>>d;
    sum=(a+b+c);
     if((a+b+c)<=d){
        cout<<"1"<<endl;
    }
    else if((a+b)<=d){
        cout<<"2"<<endl;
    }
    else if(a<=d){
        cout<<"3"<<endl;
    }
    }
return 0;
}
