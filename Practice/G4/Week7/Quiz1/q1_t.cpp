#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int number;
    int sum;

    for(int i = 0; i < n; i++) {
        
        sum = 0;
        cin >> number;

        while(number > 0) {
            sum += number % 10;
            number /= 10;
        }

        if(sum % 2 == 0) cout << "Sum of digits is even!" << endl;
        else cout << "Sum of digits is odd!" << endl;

    }

    return 0;
}