#include <iostream>
using namespace std;

int reverseInt(int x) {
    int revInt = 0;
    while (x != 0) {
        int digit = x%10;
        if ((revInt > INT_MAX / 10 || revInt < INT_MIN / 10)) {
            return 0;
        }
        revInt = revInt * 10 + digit;
        x/=10;
    }
    return revInt;
}

bool isPalindrome(int x) {
    int revInt = reverseInt(x);
    if(x==revInt){
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << "Enter the number: ";
    int x;
    cin >> x;

    cout << isPalindrome(x) << endl;
    return 0;
}
