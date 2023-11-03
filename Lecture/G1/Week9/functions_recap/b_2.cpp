#include <iostream>
#include <string>

using namespace std;

string greetSomeone(string name) {
    return "Hello, " + name + "!";
}

int main() {
    string result;
    result = greetSomeone("Nikita");

    cout << result << endl;

    return 0;
}

