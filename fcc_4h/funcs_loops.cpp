#include <iostream>
#include <sstream>

using namespace std;


// these stubs allow the functions to be called before being declared
// (otherwise, out of scope error)
string greeter(string name, int age, bool use_converter);
string int_to_string(int my_int);

int main() {
    string greeting = greeter("Lucas", 37, false);
    string greeting2 = greeter("Lucas", 37, true);
    cout << greeting << endl;
    cout << greeting2 << endl;
    for (int i = 0; i < 5; i++) {
        cout << greeting[i] << endl;
    }
    cout << "\n";

    int i = 0;
    while (i < 5) {
        cout << greeting[i] << endl;
        i++;
    }

    return 0;
}


string int_to_string(int my_int) {
    // using stringstreams
    stringstream ss;
    ss << my_int;
    string str = ss.str();

    return str;
}


string greeter(string name, int age, bool use_converter) {
    string age_str;
    if (use_converter) {
        age_str = int_to_string(age);
    } else {
        age_str = to_string(age);
    }
    
    return "Hello " + name + ", you are " + age_str + " years old.";
}
