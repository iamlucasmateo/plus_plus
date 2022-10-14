#include <iostream>

using namespace std;

int main() {
    string my_string = "My String to dissect";
    int find_i = my_string.find("i");
    cout << find_i << endl;
    cout << my_string.length() << endl;
    cout << my_string[8] << endl;
    my_string[0] = 'X';
    cout << my_string << endl;
    // parameters: starting index, character count
    string phrase = my_string.substr(5, 10);
    cout << phrase << endl;


}