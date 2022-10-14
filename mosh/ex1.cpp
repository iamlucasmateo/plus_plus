#include <iostream>

using namespace std;

int main() {
    const double STATE_TAX_RATE = 0.04;
    const double CITY_TAX_RATE = 0.02;
    double income = 95000;
    double net = income * (1 - STATE_TAX_RATE - CITY_TAX_RATE);
    cout << net;
    return 0;
}