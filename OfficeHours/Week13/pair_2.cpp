#include <iostream>
#include <map>

using namespace std;

int main() {
    vector<pair<string, int> > v;

    pair<string, int> p[10];
    
    pair<string, int> p1;
    p1.first = "Tiger";
    p1.second = 5;
    v.push_back(p1);
    v.push_back(p1);
    v.push_back(p1);

    pair<string, int> p2;
    p2 = make_pair("Elephant", 3);
    v.push_back(p2);

    string s;
    int a;
    cin >> s >> a;
    v.push_back(make_pair(s, a));

    pair<string, int> p4;
    cin >> p4.first >> p4.second;
    v.push_back(p4);

    

    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i).first << " " << v.at(i).second << endl;
    }

    return 0;
}