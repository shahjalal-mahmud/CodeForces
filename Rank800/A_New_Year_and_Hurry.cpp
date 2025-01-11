#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    int left = (4*60) - k;
    int temp = 0;
    while (left>=(5*(temp+1)))
    {
        temp++;
        left -= temp*5;
        if(temp == n){
            break;;
        }
    }
    cout<<temp;
    return 0;
}