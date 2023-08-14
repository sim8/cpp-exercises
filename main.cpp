#include <iostream>
#include "matrix.hpp"

consteval int tripleX(double x) {
    return x * 3.0;
}

int main() {
    int someArr[tripleX(4)] = {3,4};
    int* arrItem = &someArr[1];
    int wow = *arrItem;
    int dna = 4;
    int& dang = dna;

    std::cout << someArr;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "4 tripled is " << 1.2;
    matrixGame();
    return 0;
}

