#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n, m, k;
        cin>>n>>m>>k;
        int count = 0;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < m; j++)
            {
                if(a[i] + b[j] <= k){
                    count++;
                }
            }
            
        }
        cout<<count<<endl;
    }
    
    return 0;
}