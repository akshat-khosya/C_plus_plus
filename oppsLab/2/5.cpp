#include <iostream>
using namespace std;
int main()
{
    //Name:Akshat Khosya
    //Roll:20106
    int n, sum = 0;

    cout << "Enter the number:" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum of natural numbers:" << sum << endl;

    return 0;
}