#include <iostream>

using namespace std;

int main() {

    string s[] = {"Hello", "everyone"};

    string str;

    cout << sizeof(str) << endl;
    int sizeOfArray = sizeof(s)/sizeof(str);

    cout << s <<  " " << s+2 << endl;

    // cout << sizeOfArray << endl;

    return 0;
}