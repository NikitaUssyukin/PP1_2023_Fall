#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    int counter[10] = {};
    
    for(int i = 0; i < s.size(); i++) {
        string symbol;
        symbol = s.at(i);
        counter[stoi(symbol)]++;
    }

    int numOfDigits = 0;

    for (int i = 0; i < 10; i++) {
        if(numOfDigits == 0 && counter[i] != 0) {
            numOfDigits = counter[i];
        }
        if(counter[i] != 0 && counter[i] != numOfDigits) {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES "<< endl;

    return 0;
}