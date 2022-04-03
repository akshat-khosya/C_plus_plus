// Author: Akshat Khosya
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0)
#define fs cin.tie(0)
#define ll long long int
#define pb push_back
#define fr(i, n) for (int i = 0; i < n; i++)
#define fm(i, n) for (int i = n - 1; i >= 0; i--)
using namespace std;
void akshat()
{
    ll n;
    cin >> n;
    ll arr[n];
    vector<ll> evenv, oddv;
    fr(i, n) { cin >> arr[i];
        if(arr[i]%2==0){
            evenv.push_back(arr[i]);
        }else{
            oddv.push_back(arr[i]);
        }
     }
    int even = 0, odd = 0;
    fr(i, n)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
       
    }
    if(odd<2 || evenv.size()==0 && oddv.size()%2==1)
    {
        cout<<-1<<endl;
    }
    else{
        if(odd%2==0){
            fr(i,oddv.size())cout<<oddv[i]<<" ";
            fr(i,evenv.size())cout<<evenv[i]<<" ";
            cout<<endl;

        }else{
            fr(i,evenv.size()-1) cout<<evenv[i]<<" ";
            cout<<oddv[0]<<" ";
            cout<<evenv[evenv.size()-1]<<" ";
            fr(i,oddv.size()){
                if(i==0){

                }else{
                    cout<<oddv[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
    
}   
int main()
{
    fast;
    fs;
    int t;
    cin >> t;
    while (t--)
    {
        akshat();
    }
    return 0;
}