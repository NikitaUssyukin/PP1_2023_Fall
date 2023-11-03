#include <iostream>

using namespace std;

string greetSomeone() {
    string name;
    cin >> name;
    
    return "Hello, " + name + "!";
}

int main() {
    cout << greetSomeone() << endl;

    return 0;
}

