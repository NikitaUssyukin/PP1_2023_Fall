#include <iostream>
#include <queue>

using namespace std;

int main() {
    // FIFO - First In First Out
    queue<int> q;

    q.push(0);
    q.push(2);
    q.push(8);
    q.push(1);
    q.push(3);

    //   --------
    // 0, 2, 8, 1, 3
    //   --------

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    cout << "Last element of the queue: " << q.back() << endl;

    return 0;
}