#include <iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;
    int temp = (int)x;
    if (temp >= 48 && temp <= 57)
    {
        cout << "IS DIGIT";
    }
    else if (temp >= 65 && temp <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }

    return 0;
}