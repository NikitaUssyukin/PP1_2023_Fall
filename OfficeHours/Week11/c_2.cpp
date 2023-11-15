// https://acmp.ru/index.asp?main=task&id_task=950

#include <iostream>
#include <string>

using namespace std;

string compressBinary(string s, int counter) {
    string substr;
    if(s.empty()) {
        substr.insert(0, counter, '0');
        return substr;
    }
    else if(s.front() == '1' && counter == 0) {
        s.erase(0, 1);
        return "a" + compressBinary(s, counter);
    }
    if(s.front() == '0') {
        s.erase(0, 1);
        counter++;
        return compressBinary(s, counter);
    }

    s.erase(0, 1);
    substr += char(97 + counter);
    counter = 0;
    
    return substr + compressBinary(s, counter);
}

// 0000000000000000000000001
// y

// 101001
// abc

int main() {

    string s;
    cin >> s;

    cout << compressBinary(s, 0) << endl;

    return 0;
}