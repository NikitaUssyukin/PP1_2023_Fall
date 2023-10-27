#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    int counter[10] = {};
    
    while(!(s.empty())) {
        string symbol;
        symbol = s.back();
        counter[stoi(symbol)]++;
        s.pop_back();
    }

    int numOfDigits = 0;

    for (int i = 0; i < 10; i++) {
        if(counter[i] > 0) {
            if(numOfDigits == 0) numOfDigits = counter[i];
            if(counter[i] != numOfDigits) {
            cout << "NO" << endl;
            return 0;
            }
        }
    }
    
    cout << "YES "<< endl;

    return 0;
}