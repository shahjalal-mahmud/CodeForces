#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t1 = (k * l)/nl;
    int t2 = c * d;
    int t3 = p / np;
    if(t1<=t2 && t1<=t3){
        cout<<t1/n;
    }
    else if (t2<=t1 && t2<=t3)
    {
        cout<<t2/n;
    }else{
        cout<<t3/n;
    }
    

    return 0;
}