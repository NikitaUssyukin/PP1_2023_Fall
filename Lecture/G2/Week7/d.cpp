#include <iostream>
#include <cmath>

using namespace std;

double pi = M_PI;

double circleArea(int r, string option) {
    double pi = 3.14;

    // using local variable
    if (option == "local") {
        cout << option + ":" << endl;
        return pi * pow(r, 2);
    }

    // using global variable
    if (option == "global") {
        cout << option + ":" << endl;
        return ::pi * pow(r, 2);
    }
}

int main() {
   cout << circleArea(5, "local") << endl;
   cout << circleArea(5, "global") << endl;

   return 0;
}