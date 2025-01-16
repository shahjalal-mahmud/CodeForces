#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void printIrreducibleFraction(int numerator, int denominator) {
    int gcdValue = gcd(numerator, denominator);

    numerator /= gcdValue;
    denominator /= gcdValue;

    cout << numerator << "/" << denominator << endl;
}

int main() {
    int Y, W;
    cin >> Y >> W;

    int maxRoll = max(Y, W);

    int successful_outcomes = 7 - maxRoll;

    printIrreducibleFraction(successful_outcomes, 6);

    return 0;
}
