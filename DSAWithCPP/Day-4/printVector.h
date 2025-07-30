#include <vector>
#include <iostream>

void printVector(const std::vector<char>& v){
    for (int i = 0; i < v.size(); i++)
    std::cout << v[i] << " ";
};
