#include <iostream>
#include <stack>

using namespace std;

int main() {
    // FILO - First In Last Out
    stack<int> s;

    /*
    |-3-|
    |-1-|
    |-8-|
    |-2-|
    |_0_|
    */

    s.push(0);
    s.push(2);
    s.push(8);
    s.push(1);
    s.push(3);

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    
    return 0;
}