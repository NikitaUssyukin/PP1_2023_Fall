#include <iostream>

using namespace std;

int main() {

    char a;

    a = 'a';

    // type casting
    // implicit

    // each char has an ASCII code 
    int b = a;

    cout << b << endl;

    // type casting
    // explicit

    cout << int(a) << endl;

    char c = 'd';

    cout << a << c << endl;

    int n = 0;

    while (n < 6) {
        cout << "This is our " << n << " iteration" << endl;
        n++;
    }

    

    do {
        n++;
        cout << "This is our " << n << " iteration in do while" << endl;
    } while (n < 6);


    for(int i = 0; i < n; i++) {
        cout << "This is our " << i << " iteration in for loop" << endl;
    }

    for(int i = 0; i < 128; i++) {

        char symbol = i;

        cout << symbol << "\t\t\t" << i << endl;

    }

    return 0;
}