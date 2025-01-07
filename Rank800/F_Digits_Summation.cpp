#include <iostream>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    if (a < 10 && b < 10)
    {
        cout<<a + b;
    }else{
        cout<<(a%10)+(b%10);
    }
    
    return 0;
}