/*
5




1 2 3 4 5

5\n
1 2 3 4 5

5 1 2 3 4 5
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;

    // http://ejudge.kz/reference/en/cpp/io/basic_istream/ignore.html
    cin.ignore();

    // http://ejudge.kz/reference/en/cpp/io/basic_istream/peek.html
    while(cin.peek() == '\n') cin.ignore();

    string s;
    getline(cin, s);

    // freopen("output.txt", "w", stdout);

    cout << s << endl;

    return 0;
}