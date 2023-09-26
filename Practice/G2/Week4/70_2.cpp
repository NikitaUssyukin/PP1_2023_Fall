#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 1; i < n; i+=2){
        cout << a[i] << " " << a[i-1] << " "; 
    }

    if (n%2 != 0) cout << a[n-1] << endl;

    return 0;
}