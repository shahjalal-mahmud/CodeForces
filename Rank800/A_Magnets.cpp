#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    int count = 1;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (temp != arr[i])
        {
            count++;
            temp = arr[i];
        }
    }
    
    cout<<count;
    return 0;
}