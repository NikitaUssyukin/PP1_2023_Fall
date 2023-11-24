#include <iostream>
#include <queue>

using namespace std;

int main() {
    // FIFO - First In First Out
    queue<int> q;

    q.push(3);
    q.push(5);
    q.push(10);
    q.push(2);
    q.push(1);

    /* 
    3, 5, 10, 2, 1
    */

    cout << "q.front() before pop: " << q.front() << endl;

    q.pop();

    cout << "q.front() before pop: " << q.front() << endl;

    return 0;
}