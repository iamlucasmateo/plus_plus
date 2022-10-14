#include <iostream>

using namespace std;

int main() {
    cout << "Color? " << endl;
    string color;
    cin >> color;

    cout << "Violets? " << endl;
    string violets;
    cin >> violets;

    cout << "Celebrity? " << endl;
    string celebrity;
    cin >> celebrity;

    cout << "Roses are " + color + "\n" + violets + " are blue\nI love " + celebrity;


    
    return 0;
}