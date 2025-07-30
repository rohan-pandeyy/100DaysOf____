#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v) {
    for (auto x: v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    printVector(v);
    return 0;
}
