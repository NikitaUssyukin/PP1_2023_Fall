#include <iostream>
#include <string>


using namespace std;

int main() {

    // int a[5] = {};
    // a[0] = 17;
    // a[4] = 84;

    // cout << *(a+4) << endl;

    // for (int i = 0; i < 5; i++) {
    //     cout << *(a+i) << endl; 
    // }

    string name("Zhandos");

    cout << name.front() << " " << name.back() << endl;

    cout << *name.begin() << " " << *name.end() << endl;

    cout << *(name.begin()+1) << " " << *(--name.end()) << endl;

    for (string::iterator i = name.begin(); i != name.end(); i++) {
        cout << *i << " ";
    }

    // !error example!
    // for (string::iterator i = name.end(); i != name.begin(); i++) {
    //     cout << *i << " ";
    // }

    cout << endl;

    for (string::iterator i = --name.end(); i != --name.begin(); i--) {
        cout << *i << " ";
    }

    cout << endl;

    for (string::reverse_iterator i = name.rbegin(); i != name.rend(); i++) {
        cout << *i << " ";
    }

    cout << endl;

    string reversedName = string(name.begin(), name.end());

    cout << reversedName << endl;

    return 0;
}