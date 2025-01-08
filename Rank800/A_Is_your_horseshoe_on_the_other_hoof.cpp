#include <iostream>
#include <set>
using namespace std;
int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> horse;
    horse.insert(s1);
    horse.insert(s2);
    horse.insert(s3);
    horse.insert(s4);
    cout << 4 - horse.size();
    return 0;
}