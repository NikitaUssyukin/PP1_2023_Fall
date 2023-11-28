#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        m[temp]++;
    }

    map<int, int>::iterator it;
    int counter = 0;
    for(it = m.begin(); it != m.end(); it++) {
        if(it->second > 1) counter++;
    }
    cout << counter << endl;

    // 4
    // 1 2 2 3
    //
    // 1
    
    return 0;
}