#include<bits/stdc++.h>
using namespace std;
int arrSearch(int*p,int size,int x){
    
    
    if(size==0){
            
                return -1;
            
        }
        static int i=size-1;
        if(p[size-1]==x){
        return i;
    }
    else{
            i--;
             arrSearch((p+1),(size-1),x);
        }
       
    
}
int main()
{
    int size;
    cin>>size;
    int* arr=new int[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<arrSearch(arr,size,x)<<endl;
    delete[] arr;
return 0;
}