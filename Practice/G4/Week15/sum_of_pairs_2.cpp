#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;

    int x;
    cin >> x;

    while(x != 0) {
        dq.push_back(x);
        cin >> x;
    }

    
    while(dq.size() > 1) {
        cout << dq.front() + dq.back() << " ";
        dq.pop_back();
        dq.pop_front();
    }
    if(!dq.empty()) cout << dq.front();
    cout << endl;

    return 0;
}

/*
1
2
3
1
2
3
0

4 4 4 
*/