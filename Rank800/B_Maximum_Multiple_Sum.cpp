#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int k = 0;
        int x = 2;
        for (size_t i = 2; i <= n; i++)
        {
            if (k <= n/i)
            {
                k = n/i;
                x = i;
            }
            
        }
        cout<<x<<endl;
    }
    
    return 0;
}