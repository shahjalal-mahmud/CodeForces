#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the number of digits
    string digits;
    cin >> digits;  // Read the string of digits
    
    int sum = 0;
    for (char digit : digits) {
        sum += digit - '0';  // Convert character to integer and add it to sum
    }
    
    cout << sum << endl;  // Output the sum of digits
    
    return 0;
}
