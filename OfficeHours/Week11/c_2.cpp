// https://acmp.ru/index.asp?main=task&id_task=950

#include <iostream>
#include <string>

using namespace std;

string compressBinary(string s, int i, int counter) {
    if(i >= s.size()) return s;
    if(s.at(i) == '1' && counter == 0) s.at(i) = 'a';
    else if(s.at(i) == '0') counter++;
    else {
        s.erase(i - counter, counter + 1);
        // cout << char(97 + counter) << endl;
        cout << to_string('a') << endl;
        s.insert(i - counter, to_string(char(97 + counter)));
        i -= counter;
        counter = 0;
    }
    i++;
    return compressBinary(s, i, counter);
}

int main() {

    string s;
    cin >> s;

    cout << compressBinary(s, 0, 0) << endl;

    return 0;
}