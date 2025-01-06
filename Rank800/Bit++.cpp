#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string arr[n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == "++x")
        {
            ++x;
        }
        else if (arr[i] == "x++")
        {
            x++;
        }
        else if (arr[i] == "--x")
        {
            --x;
        }
        else if (arr[i] == "x--")
        {
            x--;
        }
    }
    
    cout << "Result: ";
    cout << x;
    return 0;
}