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
        int count=0;
        int num=n;
        while(num!=0){
            num=num/10;
            count++;
        }
        num=n;
        int arr[count];
        int size=count;
        count=0;
        while(num>0){
            arr[count]=num%10;
            num=num/10;
            count++;
        }
        for (int i = 0; i < k; i++)
        {
            sort(arr,arr+size);
            if(arr[0]==9){

            }else{
                 arr[0]=arr[0]+1;
            }
           
        }
        int sum=1;
        
        for (int i = 0; i < size; i++)
        {
            sum=sum*arr[i];
        }
        cout<<sum<<endl;
        
        

    }
return 0;
}