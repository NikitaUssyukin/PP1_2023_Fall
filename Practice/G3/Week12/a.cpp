#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> sv;

    string temp;
    while(cin >> temp) sv.push_back(temp);

    for(int i = 0; i < sv.size(); i++) cout << sv.at(i) << " ";
    cout << sv.at(10) << endl;

    return 0;
}