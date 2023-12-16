#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    for(int i = 1; i <= 5; ++i) {
        dq.push_back(i);
    }

    deque<int>::iterator it;
    for(it = dq.begin(); it < dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}