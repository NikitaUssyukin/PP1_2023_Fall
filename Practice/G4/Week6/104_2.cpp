#include <iostream>

using namespace std;

int main() {

    char c;
    cin >> c;

    if ('a' <= c && c <= 'z') {
        cout << char(c - ('a' - 'A')) << endl;
        return 0;
    } 

    if ('A' <= c && c <= 'Z') {
        cout << char(c + ('a' - 'A')) << endl;
        return 0;
    } 
    
    cout << c << endl;
    return 0;
}