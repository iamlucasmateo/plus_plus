#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double result = floor(1.2);
    cout << result << endl;

    cout << "Radius: ";
    double radius;
    cin >> radius;
    const double PI = 3.141519;
    double area = pow(radius, 2) * PI;
    cout << "The area is " << area << endl;


}