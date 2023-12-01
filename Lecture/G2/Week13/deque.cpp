#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        dq.push_front(x);
        // dq.push_back(x);
    }

    while(!dq.empty()) {
        cout << dq.back() << " ";
        dq.pop_back();

        // cout << dq.front() << " ";
        // dq.pop_front();
    }
    cout << endl;

    return 0;
}