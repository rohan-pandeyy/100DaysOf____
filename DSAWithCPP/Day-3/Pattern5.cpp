#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;

    for (int i = n; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}