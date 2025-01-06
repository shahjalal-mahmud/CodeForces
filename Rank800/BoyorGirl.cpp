#include <iostream>
#include <string>
#include<set>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set <char> result;
    for(char ch: s){
        result.insert(ch);
    }
    int count = result.size();
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}