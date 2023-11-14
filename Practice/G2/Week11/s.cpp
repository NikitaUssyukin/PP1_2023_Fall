#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(string s) {
    int n = stoi(s);

    s.clear();

    while(n > 0) {
        s.insert(0, to_string(n % 2));
        n /= 2;
    }

    return s;
}

int main() {

    string s;
    cin >> s;

    cout << decimalToBinary(s) << endl;

    return 0;
}

// short outline:
// string s;
// check each symbol using a loop;
// if symbol isdigit() 
   // counter++
// if next immediate is not digit
   // extract substring from our string s (s.substr(index, subsrt_size))
   // erase substring from our string s (s.erase(index, substr_size))
   // call function toBinary(string substring)
   // insert substring with binary into our string (s.insert(index, binary_substring))


// inside toBinary()
    // convert string to int, e.g. using stoi();
    // convert to binary as usual
    // return string with binary