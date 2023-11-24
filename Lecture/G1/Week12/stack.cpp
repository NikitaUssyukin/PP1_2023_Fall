#include <iostream>
#include <stack>

using namespace std;

int main() {
    //FILO - First In Last Out
    stack<int> s;

    s.push(3);
    s.push(5);
    s.push(10);
    s.push(2);
    s.push(1);

    /*
    -1-
    -2-
    -10-
    -5-
    -3-
    */

    cout << "s.top() before pop: " << s.top() << endl;

    s.pop();

    cout << "s.top() before pop: " << s.top() << endl;

    return 0;
}