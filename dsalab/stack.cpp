#include <iostream>
using namespace std;

int stack[100], n = 100, top = -1;

void push(int val)
{
    if (top >= n - 1)
        cout << "\nSTACK OVERFLOW" << endl;
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if (top <= -1) cout << "\nSTACK UNDERFLOW" << endl;
    else
    {
        cout << "\nTHE POPPED ELEMENT IS :: " << stack[top] << endl;
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        cout << "\nSTACK ELEMENTS ARE :: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
    else cout << "\nSTACK IS EMPTY!\n";
}

void isEmpty()
{
    if (top<=-1) cout<<"\nSTACK IS EMPTY!\n";
    else cout<<"\nSTACK IS NOT EMPTY!\n";
}

void isFull()
{
    if(top>=n-1) cout<<"\nSTACK IS FULL!\n";
    else cout<<"\nSTACK IS NOT FULL!\n";
}

int main()
{
    int ch, val;
    do
    {  
        cout << "\n1 - Push in stack" << endl;
        cout << "2 - Pop from stack" << endl;
        cout << "3 - Display stack" << endl;
        cout << "4 - Is stack empty" << endl;
        cout << "5 - Is stack full" << endl;
        cout << "6 - Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter value to be pushed :: ";
            cin >> val;
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            isFull();
            break;
        case 6:
            cout << "EXITING PROGRAM...." << endl;
            return 0;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    } while (ch != 6);
    return 0;
}