#include <iostream>

using namespace std;

int main() {

    double n;
    cin >> n;

    int months = 0;
    double sum = 0;
    int price = 500000;

    for(int i = 1; sum < price; i++) {
        sum += n * 0.3;
        n *= 1.1;
        months = i;
    }

    cout << months << endl;

    return 0;
}