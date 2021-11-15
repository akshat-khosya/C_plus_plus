#include <iostream>
using namespace std;
 

void printDivisors(int n)
{
    for (int i = 2; i <= n-1; i++)
        if (n % i == 0)
            cout <<" " << i;
}
 
/* Driver program to test above function */
int main()
{
    
    
    printDivisors(12);
    return 0;
}