#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int array[s.length()];
        for (int i = 0; i < s.length(); i++)
        {
            array[i] = s[i];
        }
        sort(array, array + s.length());
        for (int i = 0; i < s.length(); i++)
        {
            string s;
            s = array[i];
            cout << s;
        }
        cout << endl;
    }
    return 0;
}