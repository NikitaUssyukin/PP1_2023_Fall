#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string name;
    int age;

    getline(cin, name);
    cin >> age;

    printf("%s is %i years old. \n", name.c_str(), age);

    return 0;
}