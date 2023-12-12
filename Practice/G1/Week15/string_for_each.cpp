#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void letterToLower(char& c) {
    c = tolower(c);
}

int main() {
    string s;
    s = "It Is Snowing Outside";

    for_each(s.begin(), s.end(), letterToLower);

    cout << s << endl;

    return 0;
}