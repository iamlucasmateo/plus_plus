#include <iostream>

int main() {
    int file_size;
    file_size = 100;
    double sales = 9.99;
    std::cout << file_size;
    std::cout << "\n";
    
    int not_initialized;
    // this will print the memory location
    std::cout << not_initialized;
    std::cout << "\n";

    // CONSTANTS
    const double PI = 3.14;
    std::cout << PI;
    std::cout << "\n";

    return 0;
}