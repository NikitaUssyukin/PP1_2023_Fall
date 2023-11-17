#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};

    cout << "Size: " << arr.size() << endl;
    cout << "Empty: " << arr.empty() << endl;

    // ways to access the first element
    cout << arr[0] << endl; // unchecked access
    cout << arr.at(0) << endl; // checked access
    cout << arr.front() << endl;
    cout << *arr.begin() << endl;

    // ways to access the last element
    cout << arr[arr.size() - 1] << endl; // unchecked access
    cout << arr.at(arr.size() - 1) << endl; // checked access
    cout << arr.back() << endl;
    cout << *(arr.end() - 1) << endl;

    return 0;
}