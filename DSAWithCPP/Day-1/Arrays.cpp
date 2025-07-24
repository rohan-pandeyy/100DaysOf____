#include <iostream>
using namespace std;

void TraversArrays() {
    // int x = 2;
    int arr[3] = {2,14,15};
    // cout << sizeof(x) << endl;
    // cout << sizeof(arr) << endl;
    // cout << sizeof(arr[2]) << endl;
    int size = sizeof(arr) / sizeof(arr[2]);
    // cout << size << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    TraversArrays();
    return 0;
}