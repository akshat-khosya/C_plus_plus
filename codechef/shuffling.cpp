#include <iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cin >> num;
    for (int j = 0; j < num; j++)
    {
        int N=0;
        cin >> N;
        int arr[N];
        int c=0,d=0;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            if(arr[i]%2==0){
                c=c+1;
            }
            
        }
        d=N-c;
        if(N%2==0){
            if(c<=N/2){
                sum=sum+c;

            }
            else{
                sum=sum+N/2;
            }
             if(d<=N/2){
                sum=sum+d;
                
            }
            else{
                sum=sum+N/2;
            }
            
        }
        else{
            if(d<N/2){
                sum=sum+d;
            }
            else{
                sum=sum+N/2;
            }
             if(c<N-(N/2)){
                sum=sum+c;
            }
            else{
                sum=sum+N-(N/2);
            }
        }
        cout<<sum<<endl;
        c=0;
        d=0;
        sum=0;
    
    }
    return 0;
}