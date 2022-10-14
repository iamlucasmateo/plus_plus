#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    cout << a << "\n"
         << b << "\n" << endl;
    
    // This doesn't work
    a, b = b, a;
    cout << a << "\n" << b << "\n" << endl;

    int c = a;
    int d = b;
    b = c;
    a = d;
    cout << a << "\n";
    cout << b << "\n";

    return 0;
} 