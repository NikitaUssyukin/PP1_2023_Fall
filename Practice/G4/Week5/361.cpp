#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    for (int k = 0; k < n * m; k++) {
        int i, j;
        i = k / m;
        j = k % m;

        printf("%i ", i * j);

        if ((k+1) % m == 0) printf("\n");
    }

    return 0;
}