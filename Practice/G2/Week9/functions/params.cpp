#include <iostream>

using namespace std;

void changeNum(int a) {
    a += rand() % 6 + 1;
}

int main() {

    int a = rand() % 6 + 1;

    cout << a << endl;

    changeNum(a);

    cout << a << endl;

    return 0;
}