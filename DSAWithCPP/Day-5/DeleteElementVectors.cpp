#include<iostream>
#include<vector>
#include <algorithm>
#include"./printCharVector.h"
#include"./printIntVector.h"
using namespace std;

int main() {
    vector<int> v {2, 4, 6, 8, 0, 5, 1};

    // printIntVector(v);
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // Delete last element from vector
    v.pop_back();

    // Delete particular element from vector
    v.erase(find(v.begin(), v.end(), 8));

    // for (int i; i <= v.size(); i++) {
    //     std::cout << v[i] << " ";
    // }
    printIntVector(v);
    return 0;
}