#include <iostream>
#include <string>

using namespace std;

string tokinary(int n, int k) {
    string s;

    while(n > 0) {
        string temp;
        if(n % k > 9) {
            temp = char('A' + (n % k - 10));
        } else {
            temp = to_string(n % k);
        }
        s.insert(0, temp);
        n /= k;
    }

    return s;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << tokinary(n, k) << endl;

    return 0;
}