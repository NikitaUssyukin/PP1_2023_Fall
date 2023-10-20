#include <iostream>

using namespace std;

void greeting() {
    cout << "Hello!" << endl;
    // return "Hello"; - this is a mistake
}

string greetSomeone(string name) {
    return "Hello, " + name + "!";
}

int ourMax(int, int);

int main() {

    int a, b;
    double d;
    char c;

    a = ourMax(1, 3);

    cout << a << endl;

    cout << ourMax(7, 3) << endl;

    cout << ourMax(111, 112) << endl;

    greeting();

    cout << greetSomeone("Rustam") << endl;

    return 0;
}

int ourMax(int a, int b) {
    if (a > b) return a;
    else return b;
    // return (a > b) ? a : b;
}
