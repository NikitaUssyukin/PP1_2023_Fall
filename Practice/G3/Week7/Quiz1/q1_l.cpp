#include <iostream>

using namespace std;

int main() {

    double n;
    cin >> n;

    int months = 0;
    double sum = 0;
    int price = 500000;

    while(sum < price) {
        sum += n * 0.3;
        n *= 1.1;
        months++;
    }

    cout << months << endl;

    return 0;
}