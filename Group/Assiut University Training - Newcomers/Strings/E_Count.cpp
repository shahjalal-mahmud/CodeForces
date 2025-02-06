#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    long long sum = 0;
    for(char c: s){
        int digit = c - '0';
        sum += digit;
    }
    cout<<sum;
    return 0;
}