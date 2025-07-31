#include <iostream>
using namespace std;

int reverse(int x) {
    int reversedNumber = 0;
    while (x != 0) {
        int digit = x % 10; // Get the last digit
        if ((reversedNumber > INT_MAX / 10 || reversedNumber < INT_MIN / 10)) {
            return 0;
        }
        reversedNumber = reversedNumber * 10 + digit; // Append it to the reversed number
        x /= 10; // Remove the last digit from x
    }
    cout << reversedNumber << endl; // Output the reversed number
    return reversedNumber;
}

int main() {
    reverse(1534236469);
    return 0;
}