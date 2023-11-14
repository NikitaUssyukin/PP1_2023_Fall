#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    istringstream is(s);

    string word;

    while(is >> word) {
        for(int i = 0; i < word.size(); i++) {
            if(isupper(word.at(i))) cout << word << endl;
        }
    }

    return 0;
}