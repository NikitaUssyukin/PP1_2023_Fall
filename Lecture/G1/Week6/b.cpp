#include <iostream>

using namespace std;

int main() {

    string name("Nikita");

    // int a[5] = {};

    // a[0] = 65;
    // a[4] = 44;

    // cout << a << endl;   

    cout << *name.begin() << " " << *name.end() << endl; 
    cout << *(++name.begin()) << " " << *(name.end()-4) << endl; 

    for (int i = 0; i < name.size(); i++) {
        cout << name[i] << " ";
    }

    cout << endl;

    for (string::iterator i = name.begin(); i != name.end(); i++) {
        cout << *i << " ";
    }
    
    cout << endl;

    for (string::reverse_iterator i = name.rbegin(); i != name.rend(); i++) {
        cout << *i << " ";
    }

    cout << endl;

    cout << *name.rbegin() << " " << *name.rend() << endl;

    string reversedName = string(name.rbegin(), name.rend());

    cout << reversedName << endl;

    cout << reversedName.front() << " " << reversedName.back() << endl;

    return 0;
}