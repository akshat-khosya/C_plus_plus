#include<iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        long long int n2, n3, n4;
       unsigned long long int count = 0;
        cin >> n2 >> n3 >> n4;
        while (true)
        {
            if (n2 >= 2 && n3 >= 2)
            {
                
                count++;
                n2 -= 2;
                n3 -= 2;
            }
            if (n3 >= 2 && n4 >= 1)
            {
                count++;
                n3 -= 2;
                n4 -= 1;
            }
            if (n2 >= 1 && n4 >= 2)
            {
                count++;
                n2 -= 1;
                n4 -= 2;
            }
             if (n2 >= 3 && n4 >= 1)
                {
                    count++;
                    n2 -= 3;
                    n4 -= 1;
                }
            if (n2 >= 5)
            {
                count++;
                n2 -= 5;
            }
            else
            {
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}