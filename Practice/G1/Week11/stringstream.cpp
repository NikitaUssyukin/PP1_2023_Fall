#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    istringstream is(s);

    int a, b, c;
    string s1, s2, s3;

    is >> s1 >> a >> s2 >> b >> s3 >> c;

    cout << s1 << " " << a << endl;
    cout << s2 << " " << b << endl;
    cout << s3 << " " << c << endl;

    return 0;
}