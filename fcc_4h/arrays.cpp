#include <iostream>

int main() {
    // declaring array explicitly
    int my_nums[] = { 4, 6, 7, 4 };
    // this will print the value in the array
    std::cout << my_nums[3] << std::endl;
    // this will print something that doesn't make sense (whatever is in memory?)  
    std::cout << my_nums[7] << std::endl;  

    // declaring size explicitly
    int my_nums2[10] = { 4, 6, 7, 4 };
    std::cout << my_nums2[3] << std::endl;
    // initialized to 0
    std::cout << my_nums2[7] << std::endl;
    // whatever (as int)
    std::cout << my_nums2[15] << std::endl;

    return 0;
}