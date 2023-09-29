#include <iostream>

using namespace std;

int main(){

    string firstName;
    string secondName;

    int a;
    cin >> a;

    getline(cin, firstName);
    getline(cin, secondName);

    int firstLength = firstName.length();
    int secondLength = secondName.length();
    int lengthToUse;

    if (firstLength < secondLength) lengthToUse = firstLength;
    else lengthToUse = secondLength;

    // for (int i = 0; i < 200; i++) {
    //     cout << i << "\t" << char(i) << endl;
    // }

    bool namesAreEqual = true;

    for (int i = 0; i < lengthToUse; i++) {
        if (int(firstName[i]) == int(secondName[i])) continue;
        else if (int(firstName[i]) < int(secondName[i])) {
            cout << firstName << " is located higher" << endl;
            namesAreEqual = false;
            break;
        }
        else {
            cout << secondName << " is located higher" << endl;
            namesAreEqual = false;
            break;
        }
    }

    if (namesAreEqual) {
        if (firstLength > secondLength) cout << secondName << " is located higher" << endl;
        else if (firstLength < secondLength) cout << firstName << " is located higher" << endl;
        else cout << "Names are equal" << endl;
    }

    // cout << firstLength << endl;

    return 0;
}
