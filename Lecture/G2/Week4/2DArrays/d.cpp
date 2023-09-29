#include <iostream>

using namespace std;

int main(){

    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    // here we have received our input
    freopen("myfile.txt", "a", stdout);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << endl;
    }

    cout << a;

    return 0;
}