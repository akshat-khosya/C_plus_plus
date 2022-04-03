#include <iostream>
using namespace std;
class vote
{
    int count[5] = {0}, spoilt = 0;

public:
    vote()
    {
        cout << "enter 1 for candidate 1" << endl;
        cout << "enter 2 for candidate 2" << endl;
        cout << "enter 3 for candidate 3" << endl;
        cout << "enter 4 for candidate 4" << endl;
        cout << "enter 5 for candidate 5" << endl;
    }
    void voting()
    {
        int vote;
        cout << "give your vote:";
        cin >> vote;
        if (vote <= 5 && vote >= 1)
        {
            count[vote - 1]++;
        }
        else
        {
            spoilt++;
        }
    }
    void results()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "votes for candidate" << i + 1 << " :" << count[i] << endl;
        }
        cout << "spoilt ballots votes :" << spoilt << endl;
    }
};

int main()
{
    //Name:Akshat Khosya
    //Roll:20106
    char c;
    vote e;
    do
    {
        e.voting();
        cout << "want to vote? (y/n)" << endl;
        cin >> c;
    } while (toupper(c) == 'Y');
    e.results();

    return 0;
}