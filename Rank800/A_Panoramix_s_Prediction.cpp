#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int nthPrime(int n)
{
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n, m;
    cin >> n >> m;
    if (!isPrime(m))
    {
        cout<<"NO";
    }
    
    else if (nthPrime(n) == nthPrime(m) - 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}