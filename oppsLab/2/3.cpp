#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Name:Akshat Khosya
    //Roll:20106
    double a, b, c, r1, r2, d;

    cout << "Enter an coeffiecient of quadratic equation a,b,c respectively:" << endl;

    cin >> a >> b >> c;
    d = ((b * b) - (4 * a * c));
    r1 = (-b + sqrt(d)) / 2 * a;
    r2 = (-b - sqrt(d)) / 2 * a;

    cout << "root1:" << r1 << endl;
    cout << "root2:" << r2 << endl;

    return 0;
}