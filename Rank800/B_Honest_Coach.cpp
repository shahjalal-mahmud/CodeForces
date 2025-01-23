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
        vector<int> v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int min = INT_MAX;
        for (size_t i = 1; i < n; i++)
        {
            if(v[i]-v[i-1]<min)
            {
                min = v[i]-v[i-1];
            }
        }
        cout<<min<<endl;
        
        
    }
    
    return 0;
}