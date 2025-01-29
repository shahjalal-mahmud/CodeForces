#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string, int> freq;
    string maxTwoGram = "";
    int maxCount = 0;
    for (size_t i = 0; i < n - 1; i++)
    {
        string twoGram = s.substr(i, 2);
        freq[twoGram]++;

        if (freq[twoGram] > maxCount)
        {
            maxCount = freq[twoGram];
            maxTwoGram = twoGram;
        }
    }
    cout << maxTwoGram << endl;
    return 0;
}