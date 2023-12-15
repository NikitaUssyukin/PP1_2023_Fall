/*
Problem C: Who is the best?

You are given list of students name and their points. Askar Agay wants to find out who scored the most points by percentage. Askar Agay is busy with the NEERC final, he asks you to help him.

Input format

You are given list of students name, and points student earned.

Output format

Print students name and by points scored as a percentage of total points in descending order.

Examples

Input

10
Nurzhan 30
Gaziz 20
Aldiyar 25
Mikhail 10
Ali 10
Mikhail 5
Nurzhan 5
Temur 28
Gaziz 2
Aldiyar 5
Output

Nurzhan 25%
Aldiyar 21.4286%
Temur 20%
Gaziz 15.7143%
Mikhail 10.7143%
Ali 7.14286%
Input

5
Aspan 10
Aykhan 20
Bekbolat 10
Aspan 35
Bekbolat 30
Output

Aspan 42.8571%
Bekbolat 38.0952%
Aykhan 19.0476%
*/

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> m;
    int sum = 0;

    for(int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> s >> x;
        sum += x;
        m[s] += x;
    }

    vector<pair<double, string> > v;

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        pair<double, string> p;
        p.first = double(it->second) / double(sum) * 100;
        p.second = it->first;
        v.push_back(p);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].second << " " << v[i].first << "%\n";
    }

    return 0;
}