#include <iostream>

using namespace std;

void voidMax(int a, int b) {
    if(a >= b) cout << a << endl;
    else cout << b << endl;
}

double ourMax(double a, double b) {
    if(a >= b) return a;
    else return b;
    // return (a > b) ? a : b;
}

string greetSomeone(string name) {
    return "Hello, " + name + "!";
}

void voidGreetSomeone(string name) {
    cout << "Hello, " + name + "!" << endl;
}

int main() {

    cout << max(5, 8) << endl;

    cout << ourMax(9.5, 8.1) << endl;

    voidMax(6, 13);

    string result;
    
    result = greetSomeone("Roman");

    cout << result << endl;

    voidGreetSomeone("Nikita");

    return 0;
}