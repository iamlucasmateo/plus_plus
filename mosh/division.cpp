#include <iostream>

int main() {
    int x = 10;
    int y = 3;
    // integer division
    int z1 = x / y;
    // wouldn't change if
    // double z1 = x / y;
    std::cout << z1 << "\n";

    // casting to double
    double z2 = (x*1.0) / y;
    std::cout << z2 << "\n";

    // casting to double
    double z3 = (x + 0.0) + y;
    std::cout << z3 << "\n";
}