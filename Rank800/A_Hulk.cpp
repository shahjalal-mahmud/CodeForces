#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string hate = "I hate ";
    string love = "I love ";
    string that = "that ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << hate;
            if (i == n)
            {
                cout << "it";
            }
            else
            {
                cout << "that ";
            }
        }
        else
        {
            cout << love;
            if (i == n)
            {
                cout << "it";
            }
            else
            {
                cout << "that ";
            }
        }
    }
    return 0;
}