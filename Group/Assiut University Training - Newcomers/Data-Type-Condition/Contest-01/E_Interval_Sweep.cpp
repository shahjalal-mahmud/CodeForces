#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a==0 && b == 0)
    {
        cout<<"NO";
    }
    else if (a == b)
    {
        cout<<"YES";
    } 
    else if (a > b)
    {
        if (a-b <= 1)
        {
            cout << "YES";
        }
        else{
            cout<<"NO";
        }
    }
    else if (a < b)
    {
        if (b -a <= 1)
        {
            cout << "YES";
        }
        else{
            cout<<"NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}