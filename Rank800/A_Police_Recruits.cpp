#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int hired = 0;
    int untreated = 0;
    vector<int> police(n);
    for (int i = 0; i < n; i++)
    {
        cin>>police[i];
        if(police[i] >= 1){
            hired+=police[i];
        }
        else if(police[i] <= -1){
            if(hired == 0){
                untreated-=police[i];
            }else{
                hired+=police[i];
            }
        }
    }
    cout<<untreated;
    return 0;
}