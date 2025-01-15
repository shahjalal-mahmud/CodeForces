#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 1) {
        return 0;
    } else if (n == 1) {
        cout << "0";
        return 0;
    } else if (n == 2) {
        cout << "0 1";
        return 0;
    }

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n - 2; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}
