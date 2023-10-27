#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    int counter[10] = {};
    
    for(int i = 0; i < s.size(); i++) {
        counter[s[i] - '0']++;
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