#include <iostream>
#include <string>

using namespace std;

int main() {

    string s("Hello!");

    if(s.starts_with('H')) cout << "Yes" << "\n";
    else cout << "No" << "\n";

    return 0;
}