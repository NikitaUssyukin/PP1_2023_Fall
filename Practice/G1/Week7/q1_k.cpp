#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int numberOfStops = 1;

    // // first way to solve
    // while(n > 0) {
    //     if((numberOfStops % 2 == 0) && (numberOfStops % 7 != 0)) n -= 4;
    //     else if((numberOfStops % 2 != 0) && (numberOfStops % 7 != 0)) n += 3;
    //     numberOfStops++;
    // }

    while(n > 0) {

        if (numberOfStops % 7 == 0) {
            numberOfStops++;
            continue;
        }

        if(numberOfStops % 2 == 0) n -= 4;
        else n += 3;

        numberOfStops++;
    }

    cout << numberOfStops << endl;

    return 0;
}