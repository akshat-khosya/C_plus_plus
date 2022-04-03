#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch[26];
   for(int i=0;i<26;i++){
           int a=0;
            cin>>a;
            a=a+96;
            ch[i]=a;

   }
   for(int i=0;i<26;i++){
       cout<<ch[i];
   }
   return 0;
}