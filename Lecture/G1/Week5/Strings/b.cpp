#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;

    s = "Hello ";

    // concatenation
    s += "KBTU";

    cout << s << endl;
    
    // append
    s.append("!");

    string t("cat");
    s = t;

    s[2] = t[0] = 'r'; // this goes from right to left

    cout << s << " " << t << endl;

    string z = s.append("pet");

    cout << z << endl;

    // string comparison
    int result = s.compare(2, 3, z);

    cout << s.at(2) << endl;

    // s.compare(0, 2, t);

    cout << result << endl;

    result = z.compare(s);

    cout << result << endl;

    cout << int('r' - 'c') << endl;

    // substr
    cout << z.substr(3, 3) << endl;

    // iterators: begin, end
    string p(z.begin(), z.end());

    cout << p << endl;

    // iterators: rbegin, rend
    p = string(z.rbegin(), z.rend());

    cout << p << endl;

    string sentence = "Returns a reverse iterator pointing to the last character of the string (i.e., its reverse beginning).";

    // find
    cout << sentence.find("?") << endl;
    
    // constant string::npos
    if (sentence.find("?") == string::npos) cout << "no ? sign\n";

    int position = sentence.find(" ");
    
    while (position != string::npos) {
        sentence.replace(position, 2, ".");
        position = sentence.find(" ");
    

    cout << sentence << endl;

    return 0;
    
}