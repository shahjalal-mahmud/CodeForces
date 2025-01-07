#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    cout << "floor " << x << " / " << y << " = " << floor((double)x / y)<<endl;
    cout << "ceil " << x << " / " <<  y<< " = " << ceil((double)x / y)<<endl;
    cout << "round " << x << " / " << y << " = " << round((double)x / y);
    return 0;
}