#include <iostream>
using namespace std;

int GetDivisor(int n) {
    for (int i=1; i*i<=n; i++) {
        if(n%i==0){
            cout << i << " ";
            if((n/i != i)) {
                cout << n/i << " ";
            }
        } 
    }
}

int main() {
    cout << "Enter Number: ";
    int n;
    cin >> n;

    GetDivisor(n);
    return 0;
}
