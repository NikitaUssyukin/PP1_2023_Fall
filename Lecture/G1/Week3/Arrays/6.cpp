#include <iostream>

using namespace std;

int main() {

    string s[] = {"Hello", "everyone"};

    cout << sizeof(s[0]) << endl;
    int sizeOfArray = sizeof(s)/sizeof(s[0]);

    cout << sizeOfArray << endl;

    return 0;
}