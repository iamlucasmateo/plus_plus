#include <iostream>

int power(int baseNum, int expNum);

int main() {
    std::cout << power(3, 3) << std::endl;
    return 0;
}

int power(int baseNum, int expNum) {
    int i = 0;
    int result = 1;
    while (i < expNum) {
        result *= baseNum;
        i++;
    }

    return result;
}