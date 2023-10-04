#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) printf("%i%i ", i, j);
    //     printf("\n");
    // }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) printf("1 ");
            else if (i + j < n - 1) printf("0 ");
            else printf("2 ");
        }
        printf("\n");
    }

    return 0;
}