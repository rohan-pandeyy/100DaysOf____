#include <iostream>
using namespace std;

int count(int n) {
    int count {0};
    while (n>0) {
        count++;
        n=n/10;
    }
    cout << count << endl;
}

int main() {
    count(1132523);
    return 0;
}