#include <iostream>
#include <array>

using namespace std;

int main() {
    array<char, 5> arr = {'a', 'b', 'c', 'd', 'e'};

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << endl; // unchecked access
        cout << arr.at(i) << endl; // checked access
    }

    arr.at(4) = 'f';

    cout << arr.at(4) << endl;

    cout << "Size: " << arr.size();

    cout << "\nElement at the front: " << arr.front() << endl;
    cout << arr[0] << endl;
    cout << arr.at(0) << endl;
    cout << *arr.begin();

    cout << "\nElement at the back: " << arr.back() << endl;
    cout << arr[arr.size() - 1] << endl;
    cout << arr.at(arr.size() - 1) << endl;
    cout << *(arr.end() - 1);

    cout << "\nIs the array empty: " << arr.empty() << endl;

    return 0;
}