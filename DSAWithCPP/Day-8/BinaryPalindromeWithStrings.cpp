#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;
    string bin = "";

    while (n > 0) {
        bin += (n % 2) + '0';
        n /= 2;
    }

    string rev = bin;
    reverse(rev.begin(), rev.end());

    if (bin == rev)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}