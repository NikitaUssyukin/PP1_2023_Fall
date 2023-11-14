#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(string s) {
    cout << s << endl;
    int n = stoi(s);

    s.clear();

    while(n > 0) {
        s.insert(0, to_string(n % 2));
        n /= 2;
    }

    return s;
}

string convertAllDecimalToBinary(string s) {
    int counter = 0;
    
    for(int i = 0; i < s.size(); i++) {
        if(isdigit(s[i])) {
            counter++;
        } 
        else if(counter > 0) {
            string binary = decimalToBinary(s.substr(i - counter, counter));
            s.erase(i - counter, counter);
            s.insert(i - counter, binary);
            int offset = binary.size() - counter;
            counter = 0;
            i += offset;
        }

        if(isdigit(s[i]) && i == s.size() - 1) {
            // this is for you to figure out
        }
    // 6^&678JKjdkdl;?.,lk879Pk1kdfl4839
    }

    return s;
}

int main() {

    string s;
    cin >> s;

    cout << convertAllDecimalToBinary(s) << endl;

    return 0;
}

// string s;
// check each symbol using a loop;
// if symbol isdigit() 
   // counter++
// if next immediate is not digit
   // extract substring from our string s (s.substr(index, subsrt_size))
   // erase substring from our string s (s.erase(index, substr_size))
   // call function toBinary(string substring)
   // insert substring with binary into our string (s.insert(index, binary_substring))
   // counter = 0;

// inside toBinary()
    // convert string to int, e.g. using stoi();
    // convert to binary as usual
    // return string with binary