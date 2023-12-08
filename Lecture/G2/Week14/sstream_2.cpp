#include <iostream>
#include <sstream> // header for istringstream
#include <string> 
#include <vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    // http://ejudge.kz/reference/en/cpp/io/basic_istringstream.html

    istringstream iss(s);

    vector<pair<string, double> > v;

    pair<string, double> p;
    while(iss >> p.first && iss >> p.second) {
        v.push_back(p);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}