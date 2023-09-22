#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    int a[] = {11, 2, 101, 9, 5, 19, 7};

    sort(a, a+7);

    reverse(a, a+7); 

    for (int i = 0; i < 7; i++) {
        cout << a[i] << endl;
    }

    int r = 5;

    cout << M_PI << endl;

    cout << M_PI*5*5 << endl;
     

    return 0;
}