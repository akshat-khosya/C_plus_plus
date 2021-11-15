#include<iostream>
using namespace std;
int main(){
    int matrix[5][5], x,y,a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                x=i+1;
                y=j+1;
                 
            }
        }
    }
    a=x-3;
    b=y-3;
    int steps=0;
    if(a>0){
        steps=steps+a;
       
    }
    else{
        steps=steps-a;
       
    }
     if(b>0){
        steps=steps+b;
       
    }
    else{
        steps=steps-b;
       
    }
    cout<<steps<<endl;
    

}