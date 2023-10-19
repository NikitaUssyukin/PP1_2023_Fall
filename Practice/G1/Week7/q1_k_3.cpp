#include <iostream>
#include <climits>

using namespace std;

int main() {

    int n;
    cin >> n;

    int numberOfStops;

    for(int i = 1; i <= INT_MAX; i++) {

        if (i % 7 == 0) {
            numberOfStops = i;
            continue;
        }

        if(i % 2 == 0) n -= 4;
        else n += 3;

        if (n <= 0) {
            numberOfStops = i + 1;
            break;
        }
    }

    cout << numberOfStops << endl;

    return 0;
}