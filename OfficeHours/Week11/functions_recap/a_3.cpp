#include <iostream>

using namespace std;

void greeting() {
    cout << "Hello!" << endl;
    // return "Hello"; - this is a mistake!
}

int addition(int a, int b) {
    return a + b;
}

int main() {
    greeting();
    // cout << greeting() << endl; 
    // trying to cout a void function - also a mistake!

    cout << addition(2, 5) << endl;

    return 0;
}