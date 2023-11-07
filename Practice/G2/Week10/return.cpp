#include <iostream>
#include <string>

using namespace std;

string greeting(string name) {
    return "Hello, " + name + "!";
}

int main() {

    string s;
    cin >> s;

    // s = "Anuar";
    cout << greeting(s) << endl;
    // cout << "Hello, Anuar!" << endl;

    return 0;
}