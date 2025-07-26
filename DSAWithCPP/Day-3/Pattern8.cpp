#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;

    for(int i = n;i >= 0; i--) {
        // space
        for(int j = 0;j<n-i; j++) {
            cout << " ";
        }

        // star
        for(int j = 0; j< 2*i+1; j++) {
            cout << "*";
        }

        // space
        for(int j = 0;j<n-i-1;j++) {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}