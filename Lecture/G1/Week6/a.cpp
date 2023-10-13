#include <iostream>

using namespace std;

int main() {

    string name("Hello again, Zhansaya. How are you doing?");

    cout << name.size() << " " << name.length() << endl;

    cout << name.capacity() << " " << name.max_size() << endl;

    cout << name.empty() << endl;

    name.erase(6, 7);
    cout << name.empty() << endl;
    cout << name << endl;

    name.erase(21);
    cout << name.empty() << endl;
    cout << name << endl;

    name.erase(0);
    cout << name.empty() << endl;
    cout << name << endl;


    return 0;
}