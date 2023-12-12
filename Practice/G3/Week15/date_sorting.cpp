/*
3
15-12-2023
21-10-2023
10-11-2023

21-10-2023  
10-11-2023  
15-12-2023  
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

bool cmp(string s1, string s2) {
    string d1, d2, m1, m2, y1, y2;

    istringstream iss1(s1);
    istringstream iss2(s2);

    getline(iss1, d1, '-');
    getline(iss1, m1, '-');
    getline(iss1, y1);

    getline(iss2, d2, '-');
    getline(iss2, m2, '-');
    getline(iss2, y2);

    string date1 = y1 + m1 + d1;
    string date2 = y2 + m2 + d2;

    return date1 < date2;
}

int main() {
    int n;
    cin >> n;

    vector<string> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < n; ++i) {
        cout << v[i] << endl;
    }

    return 0;
}