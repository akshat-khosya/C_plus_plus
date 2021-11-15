#include <iostream>
using namespace std;
int main()
{
    int numofforce, x = 0, y = 0, z = 0;
    cin >> numofforce;
    int* arr=  new int[numofforce*3];
    
    for (int i = 0; i < numofforce * 3; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < numofforce * 3; i = i + 3)
    {

        x = x + arr[i];
        y = y + arr[i + 1];
        z = z + arr[i + 2];
    }

    if (x == 0 && y == 0 && z == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    delete[] arr;
    return 0;
}