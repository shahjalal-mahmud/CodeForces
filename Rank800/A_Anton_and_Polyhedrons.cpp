#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "Tetrahedron")
        {
            count += 4;
        }
        if (s == "Cube")
        {
            count += 6;
        }
        if (s == "Octahedron")
        {
            count += 8;
        }
        if (s == "Dodecahedron")
        {
            count += 12;
        }
        if (s == "Icosahedron")
        {
            count += 20;
        }
    }
    cout << count;
    return 0;
}