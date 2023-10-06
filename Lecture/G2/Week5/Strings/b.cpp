#include <iostream>

using namespace std;

int main() {

    string sentence = "If subpos is greater than str's length, an out_of_range exception is thrown.\nIf the resulting string length would exceed the max_size, a length_error exception is thrown.\nA bad_alloc exception is thrown if the function needs to allocate storage and fails.";

    // find
    cout << sentence.find("length") << endl;

    // find_last_of
    cout << sentence.find_last_of("length") << endl;

    // find_first_not_of
    cout << sentence.find_first_not_of("gfsup obIreta") << endl;

    // erase
    sentence.erase(100);
    cout << sentence << endl;

    // replace
    int position = sentence.find("greater");
    sentence.replace(position, string("greater").size(), "less");
    cout << sentence << endl;

    position = sentence.find(" ");
    while (position != string::npos) {
        sentence.replace(position, 1, ".");
        position = sentence.find(" ");
    }
    cout << sentence << endl;

    // size, length
    cout << sentence.size() << " " << sentence.length() << endl;

    // insert

    // begin, end
    cout << *sentence.begin() << " " << *(sentence.end() - 1) << endl;

    // rbegin, rend
    string reversed = string(sentence.rbegin(), sentence.rend());
    cout << reversed << endl;;

    //stringstream

    return 0;
}