#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
       long long L,R,re,diff;
       cin>>L>>R;
    //    l=L;
    //     while(re>0){
    //         diff=l%10;
    //         sum=sum+diff;
    //         l=l/10;

    //     }
    //    long long r;
    //     r=3-(sum/3);
    diff=R-L+1;
    re=diff/3;
    cout<<re<<endl;
        
    }
    return 0;
}