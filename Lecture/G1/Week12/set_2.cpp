#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> s;

    cout << "Empty: " << s.empty() << endl;
    cout << "Size before insertions: " << s.size() << endl;

    s.insert("Car");
    s.insert("Aeroplane");
    s.insert("Boat");

    cout << "Empty: " << s.empty() << endl;
    cout << "Size after insertions: " << s.size() << endl;

    cout << "Before erase: " << endl;
    cout << "Size: " << s.size() << endl;
    set<string>::iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // erasing the first element in a set
    s.erase(s.begin());

    cout << "After erase: " << endl;
    cout << "Size: " << s.size() << endl;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    s.erase("Boat");

    cout << "After erasing a Boat: " << endl;
    cout << "Size: " << s.size() << endl;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    s.insert("Aeroplane");
    s.insert("Boat");
    s.erase(s.begin(), s.end());

    cout << "Is empty after erasing all elements: " << s.empty() << endl;

    s.insert("Dog");
    s.insert("Cat");
    s.insert("Mouse");

    cout << "Set size after adding new elements: " << s.size() << endl;
    s.clear();
    cout << "Set size after clear: " << s.size() << endl;

    s.insert("Dog");
    s.insert("Cat");
    s.insert("Mouse");

    cout << "Is Tiger present in our set? ";
    if(s.find("Tiger") != s.end()) cout << "Yes!" << endl;
    else cout << "No!" << endl;

    s.insert("Tiger");

    cout << "Is Tiger present in our set? ";
    if(s.find("Tiger") != s.end()) cout << "Yes!" << endl;
    else cout << "No!" << endl;

    cout << *(s.find("Tiger")) << endl;
    // cout << *(s.find("Lion")) << endl;

    // erasing the last element in a set
    // s.erase(s.end() - 1); - this will not work!
    // s.erase(s.end()--); - this will give you a SegFault!
    s.erase(--s.end());

    s.insert("Tiger");
    s.insert("Lion");
    s.insert("Elephant");
    // erase elements from [second to fourth];
    set<string>::iterator end_it = s.end();
    end_it--;
    end_it--;

    cout << "Before erasing elements from [second to fourth]:" << endl;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    s.erase(++s.begin(), end_it);

    cout << "After erasing elements from [second to fourth]:" << endl;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}