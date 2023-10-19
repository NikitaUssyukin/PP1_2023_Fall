#include <iostream>

using namespace std;

int main() {

    int upperleftX, upperleftY;
    int lowerrightX, lowerrightY;
    int X, Y;

    cin >> upperleftX >> upperleftY >> lowerrightX >> lowerrightY >> X >> Y;

    if ((upperleftX <= X && X <= lowerrightX) && (lowerrightY <= Y && Y <= upperleftY)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}