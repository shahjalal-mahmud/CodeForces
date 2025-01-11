#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int team1 = 0;
    int team2 = 0;
    for(char ch : s){
        if (ch == '0')
        {
            team1++;
            team2 = 0;
            if (team1 == 7)
            {
                cout<<"YES";
                return 0;
            }
            
        }else{
            team2++;
            team1 = 0;
            if (team2 == 7)
            {
                cout<<"YES";
                return 0;
            }
            
        }
        
    }
    cout<<"NO";
    return 0;
}