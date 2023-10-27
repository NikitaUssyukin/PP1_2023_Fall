#include <iostream>
#include <string>

using namespace std;

int main() {

    int a[] = {1, 3, 0, 9, 4};

    cout << a << " " << a[0] << endl;

    cout << *a << " " << a[0] << endl;

    for(int i = 0; i < 5; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;

    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;

}