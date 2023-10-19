#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int stopCounter;

    //// one way to solve
    // while(n > 0) {
    //     if (stopCounter % 7 != 0) {
    //         if (stopCounter % 2 == 0) n -= 4;
    //         else n += 3;
    //     }
    //     stopCounter++;
    // }

    // another way to solve
    for(int i = 1; n > 0; i++) {
        if (i % 7 != 0) {
            if (i % 2 == 0) n -= 4;
            else n += 3;
        }
        stopCounter = i + 1;
    }

    cout << stopCounter << endl;

    return 0;
}