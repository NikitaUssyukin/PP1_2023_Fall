#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    map<int, double> m;

    double GP = 1.0;
    for(int i = 55; i <= 100; i += 5) {
        for(int j = 1; j <= 5; ++j) {
            m[i - j] = GP;
        }
        GP += 1.0/3.0;
    }
    m[100] = 4.0;

    // cout << 1.0/3.0 << endl;

    // map<int, double>::iterator it;
    // for(it = m.begin(); it != m.end(); ++it) {
    //     cout << it->first << " - " << it->second << endl; 
    // }

    double GPA, sumOfGP = 0.0;
    int sumOfCredits = 0;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int att1, att2, final, cred;
        cin >> att1 >> att2 >> final >> cred;
        if(att1 + att2 < 30 || final < 20) {
            sumOfCredits += cred;
            continue;
        }
        sumOfGP += m[att1 + att2 + final] * cred;
        sumOfCredits += cred;
    }

    // cout << "\nsumOfGP: " << sumOfGP << ", sumOfCredits: " << sumOfCredits << endl;

    cout << sumOfGP / sumOfCredits << endl;

    return 0;
}