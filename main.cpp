#include <iostream>

consteval int tripleX(double x) {
    return x * 3.0;
}

int main() {
    int someArr[tripleX(4)] = {3,4};
    std::cout << someArr;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "4 tripled is " << 1.2;
    return 0;
}

