#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    int num=0;
    while (t--)
    {
        num++;
        int size;
        cin>>size;
        char color[size];
        cin>>color;
        vector<char> strok;
        for (int i = 0; i < size; i++)
        {
         if(strok.size()==0){
             switch (color[i])
             {
             case 'U':
                 // do nothing
                 break;
             case 'R':

                 strok.push_back('R');
                 break;
            case 'Y':
                 strok.push_back('Y');
                 break;
            case 'B':
                 strok.push_back('U');
                 break;
            case 'O':
                 strok.push_back('R');
                 strok.push_back('Y');
                 break;
            case 'P':
                 strok.push_back('R');
                 strok.push_back('B');
                 break;
            case 'G':
                 strok.push_back('Y');
                 strok.push_back('B');
                 break;
            case 'A':
                 strok.push_back('R');
                 strok.push_back('Y');
                 strok.push_back('B');
                 break;
             default:
                 break;
             }
         }else{
             for (int j = 0; j < strok.size(); j++)
             {
                 if(strok[j]==color[i]){
                     //nothing
                 }else{
                      switch (color[i])
             {
             case 'U':
                 // do nothing
                 break;
             case 'R':

                 strok.push_back('R');
                 break;
            case 'Y':
                 strok.push_back('Y');
                 break;
            case 'B':
                 strok.push_back('U');
                 break;
            case 'O':
                 strok.push_back('R');
                 strok.push_back('Y');
                 break;
            case 'P':
                 strok.push_back('R');
                 strok.push_back('B');
                 break;
            case 'G':
                 strok.push_back('Y');
                 strok.push_back('B');
                 break;
            case 'A':
                 strok.push_back('R');
                 strok.push_back('Y');
                 strok.push_back('B');
                 break;
             default:
                 break;
             }
         
                 }
             }
             
         }   
        }
        
        cout<<"Case #"<<num<<": "<<strok.size()<<endl;
        
        
    }
return 0;
}