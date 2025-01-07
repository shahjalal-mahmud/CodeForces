#include <iostream>
using namespace std;
int main()
{
    int n, k, a;
    cin >> n >> k >> a;
    long long result = (n*k)/a;
    if (sizeof(result) <=9)
    {
        cout<<"int";
    }
    else{
        cout<<"long long";
    }
    return 0;
}