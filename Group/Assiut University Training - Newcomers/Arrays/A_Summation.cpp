#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    long long sum = 0;
    for (long long i = 0; i < n; i++)
    {
        cin>>vec[i];
        sum += vec[i];
    }
    cout<<abs(sum);
    
    return 0;
}