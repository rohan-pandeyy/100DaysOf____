#include<iostream>
#include<vector>

void printCharVector(std::vector<char>& v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
}