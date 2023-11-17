#include <iostream>

using namespace std;

void greeting() {
    cout << "Hello!" << endl;
    return; // Not a mistake
    // return "Hello!"; - This is a mistake
}

int addition(int a, int b) {
    return a + b;
}

int main() {
    greeting();

    cout << addition(2, 5) << endl;
    //       return       
    //         |
    //         |
    // cout << 7 << endl;

    cout << endl;
    cout << "\n";

    /*
    1 2 3 4
    5 6 7 8
    9 10 11 12
    */

    return 0;
}