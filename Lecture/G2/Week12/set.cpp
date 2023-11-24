#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> s;

    cout << "Empty before: " << s.empty() << endl;
    cout << "Size before insertions: " << s.size() << endl;

    s.insert("Dog");
    s.insert("Cat");
    s.insert("Mouse");

    // these won't work with set
    // for(int i = 0; i < 5; i++) {
    //     cin >> s[i]; 
    //     cin >> s.at(i);
    // }

    cout << "Empty after: " << s.empty() << endl;
    cout << "Size after insertions: " << s.size() << endl;

    // accessing the first and the last elements in a set
    cout << *s.begin() << " " << *(--s.end()) << endl;

    // s.erase(s.end()--); - this will give you a SegFault

    s.erase(--s.end());

    cout << "Last element after s.erase(--s.end()): " << *(--s.end()) << endl;
    

    return 0;
}