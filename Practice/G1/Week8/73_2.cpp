#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 1;

    int i = 0;
    while(i < n - 1) {
        if(a[i] < a[i + 1]) cnt++;
        i++;
    }

    cout << cnt << endl;

    return 0;

}