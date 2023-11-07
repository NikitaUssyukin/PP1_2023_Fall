#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> a;

    a[0] = 1;
    a[1] = 2;
    a[999] = 3;
    a[-100] = 300;

    cout << a[0] << " " << a[1] << endl;

    cout << a.begin() -> first << " " << a.begin() -> second << endl;

    return 0;
}