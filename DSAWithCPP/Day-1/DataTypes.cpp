#include<iostream>
using namespace std;

void DataTypes() {
    int integerVar = 10; // bits: 32
    // Note: The size of int may vary based on the system architecture.
    float floatVar = 5.5f; // bits: 32
    double doubleVar = 3.14; // bits: 64
    char charVar = 'A'; // bits: 8
    bool boolVar = true; // bits: 1

    cout << "Integer: " << integerVar << endl;
    cout << "Float: " << floatVar << endl;
    cout << "Double: " << doubleVar << endl;
    cout << "Character: " << charVar << endl;
    cout << "Boolean: " << boolVar << endl;
}

int main() {
    DataTypes();
    return 0;
}