#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if(m>=n){
            cout<<m+1<<endl;
        }
        else{
            cout<<n+1<<endl;
        }
    }

    return 0;
}