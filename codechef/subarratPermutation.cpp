#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=i+1;
    }
    if(k==1){
        if(n==1){
            cout<<1<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }else{
        k--;
       
        int index=0;
        for (int i = 0; i < n; i++)
    {
        if(k==1){
            index=i+1;
            break;
        }
        k--;
    }
        for (int i = 0; i < index; i++)
        {
            cout<<i+1<<" ";
        }
        for (int i = n; i > index; i--)
        {
           cout<<i<<" ";
        }
        cout<<endl;
        
    }

    
    
    
    }
return 0;
}