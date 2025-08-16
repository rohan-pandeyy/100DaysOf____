#include <iostream>
using namespace std;

int power(int x, int y) { // 3, 3
    int ans = 1; // 1
    for(int i=0; i<y; i++) { // 0 -> 3
        ans *= x; // 9 * 3
    }
    return ans;
}

int count_digits(int n) { // 153
    int digit = 0;
    while(n>0) { 
        digit++; // 3
        n /= 10; // 0
    }
    return digit; // 3
}

bool check_armstrong(int n) { // 153
    int num_of_digits = count_digits(n);
    int digit = 0;
    int sum = 0;
    int temp = n; // 153
    while(n!=0) {
        digit = n % 10; // 3
        sum += power(digit, num_of_digits); // 3, 3
        n /= 10;
    }
    if(temp==sum) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n; // 153

    if(check_armstrong(n) == false) {
        cout << "Not an Armstrong Number";
    } else {
        cout << "Armstrong Number";
    }

    return 0;
}


// 153 = 1^3 + 5^3 + 3^3 = 0