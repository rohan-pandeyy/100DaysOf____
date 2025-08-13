#include<iostream>
using namespace std;

long long binarize(int x) {
    long long binary = 0;
    long long place = 1;
    while(x > 0) {
        int digit = x % 2;
        binary = binary + digit * place;
        place *= 10;
        x /= 2;
    }
    return binary;
}
int reverseInt(int x) {
    int revInt = 0;
    while (x != 0){
        int digit = x%10;
        if ((revInt > INT_MAX / 10 || revInt < INT_MIN / 10)) {
            return 0;
        }
        revInt = revInt * 10 + digit;
        x/=10;
    }
    return revInt;

}

int main() {
    int x;
    cin >> x;

    long long binary = binarize(x);
    long long reversed = reverseInt (binary);

    if (binary == reversed) {
        cout << "YES";
    } else {
            cout << "NO";
    }
    return 0;
}
