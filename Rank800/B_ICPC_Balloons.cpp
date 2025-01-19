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
        string s;
        cin>>s;
        int ballons = 2;
        sort(s.begin(), s.end());
        for (int i = 1; i < n; i++)
        {
            if(s[i] == s[i-1]){
                ballons++;
            }else{
                ballons+=2;
            }
        }
        cout<<ballons<<endl;
    }
    
    return 0;
}