#include<iostream>
using namespace std;

void IfElseIf() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade A" << endl;
    } else if (marks >= 70) {
        cout << "Grade B" << endl;
    } else if (marks >= 50) {
        cout << "Grade C" << endl;
    } else if (marks >= 35) {
        cout << "Grade D" << endl;
    } else {
        cout << "Fail" << endl;
    }
}

int main() {
    IfElseIf();
    return 0;
}