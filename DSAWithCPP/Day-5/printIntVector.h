#include <iostream>
#include <vector>

void printIntVector(std::vector<int>& v) {
    for (int i = 0; i <= v.size(); i++) {
        std::cout << v[i] << " ";
    }
}