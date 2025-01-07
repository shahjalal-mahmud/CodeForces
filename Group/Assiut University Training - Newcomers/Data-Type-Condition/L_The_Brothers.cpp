#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string s3, s4;
    cin >> s3 >> s4;
    if (s2 == s4)
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }

    return 0;
}