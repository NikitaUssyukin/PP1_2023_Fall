#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> s;

    s.insert("Dog");
    s.insert("Cat");
    s.insert("Mouse");
    s.insert("Tiger");
    s.insert("Lion");
    s.insert("Panda");
    s.insert("Frog");
    s.insert("T-Rex");
    s.insert("Phoenix");
    s.insert("Elephant");

    set<string>::iterator it;
    for(it = s.begin(); it != s.end(); it++) cout << *it << " ";
    cout << endl;
    
    // erasing elements from the second including
    // up to the third from the end, not including
    set<string>::iterator begin_it = s.begin();
    set<string>::iterator end_it = s.end();
    end_it--;
    end_it--;

    s.erase(--begin_it, --end_it);

    cout << "Set after erase: \n";
    for(it = s.begin(); it != s.end(); it++) cout << *it << " ";
    cout << endl;

    return 0;
}