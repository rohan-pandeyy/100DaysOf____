#include <iostream>
using namespace std;

void Strings() {
    string str {"hello"};
    cout << str << endl;
    
    cout << str.length() << endl;
    
    string str2 {"world"};
    str.swap(str2);
    cout << str << endl;

    cout << str.size();

}

int main() {
    Strings();
    return 0;
}
