#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Name:Akshat Khosya

    //Roll:20106

    int num, f, count = 0, d, sum = 0;
    cout << "Enter the number:" << endl;
    cin >> num;
    d = num;
    while (d > 0)
    {
        count++;
        d = d / 10;
    }

    while (num > 0)
    {
        if (num < 10)
        {
            f = num;
        }
        else
        {
            f = num % 10;
        }

        sum = sum + f * pow(10, count - 1);
        count--;
        num = num / 10;
    }

    cout << "reverse number is :" << sum<<endl;
    return 0;
}