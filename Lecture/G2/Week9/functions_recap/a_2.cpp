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

    int c = addition(2, 5);
    // c = 7;

    // cout << greeting() << endl; 
    // trying to cout a void function - also a mistake!

    return 0;
}