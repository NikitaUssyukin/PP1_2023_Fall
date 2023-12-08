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

    vector<int> v;

    int x;
    while(iss >> x) {
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }

    return 0;
}