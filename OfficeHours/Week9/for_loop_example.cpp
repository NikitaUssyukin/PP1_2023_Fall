#include <iostream>

using namespace std;

int main() {

    for(int i = 0, j = 0; i < 10 && j < 15; i = i + 2, j = j + 3) {
        cout << i << " " << j << endl;
    }

    return 0;
}