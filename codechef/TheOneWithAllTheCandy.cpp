#include<bits/stdc++.h>
using namespace std;
int zero(int*arr,int size,int count){
    int po[count];
    int sub=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0){
            po[sub]=i;
            sub++;
        }
    }
    if(count==1){
        int ans[count+1];
        
        return size-1;
    }
    int ans[count];
    cout<<po[3]<<endl;
    
    sub=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0 && sub==0){
            ans[sub]=i;
            sub++;
        }
        else if(arr[i]==0){
            ans[sub]=i-po[sub-1]-1;
        }else if(arr[i]==0 && sub==count-1 ){
            ans[0]=ans[0]+size-i-1;
            sub++;
        }
    }
    sort(ans,ans+count);
    
    return ans[count-1];
}
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin>>n;
        
        int arr[n];
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]==0){
                count++;
            }
            
        }
        
        if(count==0){
            
            int sum=0;
            
            while(count!=0){
                
               
            for (int i = 0; i < n; i++)
            {
                arr[i]=arr[i]-1;
                if(arr[i]==0){
                count++;
                    }
            
            }
             
            
            sum=sum+n;
            
            }
            
            for (int i = 0; i < n; i++)
            {
                if(arr[i]==0){
                    sum=sum+i;
                    break;
                }
            }
            
        
            cout<<sum<<endl;
            count=0;



            
        }
        else{
            int ans=zero(arr,n,count);
            cout<<ans<<endl;
        }
        
    
    }
return 0;
}