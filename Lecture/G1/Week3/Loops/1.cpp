#include <iostream>

using namespace std;

int main() {

    int a = 0;

    while(a < 10) {
        cout << a+1 << endl;
        a++;
    }

    for (int i = 0; i < 10; i++) {
        cout << i+1 << endl;
    }

    int counter = 0;

    for (;;) {
        cout << ++counter << endl;
        if (counter >= 10)
        {
            break;
        }
    }

    cout << "We have stopped the loop!" << endl;

    for (int i = 1; i <= 10; i++) {
        if (i%2==0) cout << i << endl;
    }

    for (int i = 1; i <= 10; i++) {
        if (i%2==1) continue;
        cout << i << endl;
        // ... lines of code 
        // ... more lines
    }

    return 0;
}