#include <iostream>
#include <string>

using namespace std;

void toUppercase(string str) {
    for(int i = 0; i < str.size(); i++) {
        str[i] = toupper(str.at(i));
    }
    cout << str << endl;
}

int main() {

    string str;
    cin >> str;

    toUppercase(str);

    // cout << str << endl;
   
}