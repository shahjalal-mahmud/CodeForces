#include <iostream>
#include <string>
#include<set>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    set<char> result;
    for(char ch: s){
        if (ch>= 'a' && ch<='z')
        {
            result.insert(ch);
        }
        
    }
    cout<<result.size();
    return 0;
}