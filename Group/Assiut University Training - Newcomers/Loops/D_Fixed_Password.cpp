#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    bool correct = false;
    int n;
    while (!correct)
    {
        cin>>n;
        if(n == 1999){
            cout<<"Correct";
            correct = true;
        }else{
            cout<<"Wrong"<<endl;
        }
    }
    
    return 0;
}