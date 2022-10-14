#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // 2 bytes
    short sh;
    // 4 bytes
    int integer = 41234245;
    // narrowing: this will truncate the number
    short sh2 = integer;
    std::cout << sh2 << std::endl; 
    // 4 bytes
    long l = 999'999'999L;
    char letter = 'a';
    // long double = 3.1242345234124L;

    int hexa = 0xAAFF55;
    int binary = 0b111001;

    // brace initializer
    int brace {7234};
    std::cout << brace << std::endl;

    srand(time(nullptr));
    std::cout << rand() << std::endl; 
    // number from 0 to 15
    std::cout << rand() % 16;

    return 0;
}