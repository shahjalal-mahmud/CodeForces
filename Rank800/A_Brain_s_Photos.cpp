#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    cin>>m>>n;
    char a[m][n];
    bool flag = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) {
            cin>>a[i][j];
            if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y') {
                flag = true;
            }
        }
    }
    if (flag) {
        cout<<"#Color"<<endl;
    } else {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}