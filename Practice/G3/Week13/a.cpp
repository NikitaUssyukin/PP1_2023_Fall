#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    pair<string, int> p;

    // m.insert({"Cow", 100});
    m.insert(make_pair("Cow", 100));

    return 0;
}



