#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int numberOfStops;

    for(int i = 1; n > 0; i++) {

        if (i % 7 == 0) {
            numberOfStops = i;
            continue;
        }

        if(i % 2 == 0) n -= 4;
        else n += 3;

        numberOfStops = i + 1;
    }

    cout << numberOfStops << endl;

    return 0;
}