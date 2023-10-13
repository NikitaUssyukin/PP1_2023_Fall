#include <iostream>
#include <string>


using namespace std;

int main() {

    string name = "Hello, Balzhan! How are you doing?";

    cout << "Size & length: " << name.size() << " " << name.length() << endl;

    cout << "Capacity: " << name.capacity() << endl;

    cout << "Max size: " << name.max_size() << endl;

    name.erase(0);

    cout << "Is empty: " << name.empty() << endl;
    
    return 0;
}