#include<iostream>
using namespace std;
int main()
{

int n,m,a,b,f,d; cin>>n>>m>>a>>b>>f>>d;
int c[n][m];
if((a+b)%2==(f+d)%2){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==(a+b)%2) c[i][j]=1;
            else c[i][j]=2;
        }
    }
}else{
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==(a+b)%2) c[i][j]=1;
            else c[i][j]=3;
        }
    }
}
c[f-1][d-1]=2;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
