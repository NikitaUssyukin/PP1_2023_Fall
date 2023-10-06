#include <iostream>

using namespace std;

int main() {

    // string initialization
    string s = "Hello";
    string t("KBTU");
    string x(10, 'x');

    // string errors
    // string error1 = 'a';
    // string error2('a');
    // string error3 = 17;
    // string error4(23);

    cout << s << " " << t << " " << x << endl;

    // string comparison
    cout << (s < t) << (s == t) << (s >= t) << endl;

    cout << s.at(0) << " " << s[0] << endl;

    //cin >> s >> t;
    getline(cin, s, 'a');

    cout << s << endl << t << endl;

    return 0;

}