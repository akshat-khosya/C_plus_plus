#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T,n,s;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n>>s;
        int mid = round((n+1)/2);
        cout<<mid<<endl;
        int max_median = s/((n+1)-mid);
        cout<<max_median<<endl;
    }

    return 0;
}