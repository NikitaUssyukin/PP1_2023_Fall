#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int h = n / 3600 % 24;

    int m = n % 3600 / 60;

    int s = n % 3600 % 60;

    cout << h << ":";

    if (m<10) cout << "0" << m << ":";
    else cout << m << ":";

    if (s<10) cout << "0" << s << endl;
    else cout << s << endl;

    return 0;
}