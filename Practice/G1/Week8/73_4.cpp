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

    for(int i = 0; ; i++) {
        if(i == n - 1) break; 
        if(a[i] < a[i + 1]) cnt++;
    }

    cout << cnt << endl;

    return 0;

}