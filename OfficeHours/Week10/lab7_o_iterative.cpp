#include <iostream>
#include <string>

using namespace std;

string tokinary(int n, int k) {
    string s;

    int a[100] = {};

    int j = 0;
    while(n > 0) {
        a[j] = n % k;
        n /= k;
        j++;
    }

    for(int i = j - 1; i >= 0; i--) {
        if(a[i] > 9) {
            string temp;
            temp = char('A' + (a[i] - 10));
            s.append(temp);
        } else {
            s.append(to_string(a[i]));
        }
    }

    return s;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << tokinary(n, k) << endl;

    return 0;
}