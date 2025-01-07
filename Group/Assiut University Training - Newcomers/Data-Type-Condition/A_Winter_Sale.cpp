#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x, p;
    cin >> x >> p;
    double price = (p*100)/(100-x);
    cout<<fixed<< setprecision(2) << price;
    return 0;
}