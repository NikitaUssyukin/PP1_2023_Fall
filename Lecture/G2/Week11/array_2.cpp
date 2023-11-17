#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 15> arr;

    cout << "Size: " << arr.size() << endl;
    cout << "Empty: " << arr.empty() << endl;

    arr.fill(789);

    cout << "Size after fill: " << arr.size() << endl;
    cout << "Empty after fill: " << arr.empty() << endl;

    for(int i = 0; i < arr.size(); i++) {
        cout << arr.at(i) << " ";
    }
    cout << endl;

    return 0;
}