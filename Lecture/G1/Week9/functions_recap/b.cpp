#include <iostream>

using namespace std;

string greetSomeone(string name) {
    return "Hello, " + name + "!";
}

int main() {
    cout << greetSomeone("Nikita") << endl;

    return 0;
}

