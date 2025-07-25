#include <iostream>
using namespace std;

// pass by value
void doSomething(string s) {
    s [0] = 't';
    cout << s;
}

int main() {
    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}
