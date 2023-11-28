#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s1;
    set<int> s2;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        // 1 2 2
        int temp;
        cin >> temp;
        if(s1.find(temp) == s1.end()) {
            s1.insert(temp);
            continue;
        }
        if(s2.find(temp) == s2.end()) {
            s2.insert(temp);
        }
    }

    cout << s2.size() << endl;

    // 4
    // 1 2 2 3
    //
    // 1
    
    return 0;
}