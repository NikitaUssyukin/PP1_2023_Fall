#include <iostream>

using namespace std;

int main() {

    for(int i = 0; i < 10; i++) {
        // some code...
    }

    int i = 0;
    while(i < 10) {

        i++;
    }

    int n = 10;

    for(int j = 1; n > -100; j*=2, n-=j) {
        cout << j << " " << n << endl;
    }

    return 0;
}