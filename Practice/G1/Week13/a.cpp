#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> s;

    s.insert("Dog");
    s.insert("Cat");
    s.insert("Mouse");
    s.insert("Elephant");
    s.insert("Tiger");
    s.insert("Lion");

    set<string>::iterator it;
    set<string>::iterator it_end = s.end();

    // set iterator does not support +, -, >, <
    // erasing from the second element to the fourth from the end, inclusively
    --it_end;
    --it_end;
    s.erase(++s.begin(), --it_end);

    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}