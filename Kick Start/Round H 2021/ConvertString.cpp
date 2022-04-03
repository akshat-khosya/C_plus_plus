#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    int count=0;
    while (t--)
    {
        count++;
    string s,f;
    cin>>s>>f;
    int arr[s.size()];
    for (int i = 0; i < s.size(); i++)
    {
        arr[i]=s[i];
    }
    int fav[f.size()];
    for (int i = 0; i < f.size(); i++)
    {
        fav[i]=f[i];
    }
    sort(arr,arr+s.size());
    sort(fav,fav+f.size());
    ll sum=0;
    for (int i = 0; i < s.size(); i++)
    {
        int a[f.size()];
       for (int j = 0; j < f.size(); j++)
       {
           a[j]=arr[i]-fav[j];
           if(a[j]==25 || a[j]==-25){
               a[j]=1;
           }
           if(a[j]<0){
               
               a[j]=-a[j];
           }
             
       }
       sort(a,a+f.size());
       
       sum+=a[0];
       
       
    }
    
    cout<<"Case #"<<count<<": "<<sum<<endl;

    
    }
return 0;
}