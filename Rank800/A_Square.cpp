#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int square(int x1, int y1, int x2, int y2){
    int x = x2 - x1;
    int y = y2 - y1;
    return x*x + y*y;

}
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(x1 == x2){
            cout<<square(x1, y1, x2, y2)<<endl;
        }
        else if (x1 == x3)
        {
            cout<<square(x1, y1, x3, y3)<<endl;
        }
        else if (x1 == x4)
        {
            cout<<square(x1, y1, x4, y4)<<endl;
        }
        else if (x2 == x3)
        {
            cout<<square(x2, y2, x3, y3)<<endl;
        }
        else if (x2 == x4)
        {
            cout<<square(x2, y2, x4, y4)<<endl;
        }
        else
        {
            cout<<square(x3, y3, x4, y4)<<endl;
        }
    }
    
    return 0;
}