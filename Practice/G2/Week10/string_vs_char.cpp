#include <iostream>
#include <string>

using namespace std;

int main() {

    // chars: 'A', 'a', '1', '!',' ', etc...
    // strings: "Hello", "123", "Hi all!", etc
    
    'A'; // char
    "A"; // string
    ' '; // char

    char c = 'A'; 
    string s("Hello"); // string s = "Hello";

    // mistakes:
    // string s('A');
    // string s = 'A';
    // but this is not a mistake:
    s = 'A'; 
    
    // concatenation
    s += 'A';
    
    // using cin
    cin >> s;

    // using getline
    getline(cin, s);

    return 0;
}