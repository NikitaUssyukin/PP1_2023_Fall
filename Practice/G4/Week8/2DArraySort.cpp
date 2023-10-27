#include <iostream>
#include <algorithm>

using namespace std;

int returnOne(){
    return 1;
}

void someFunction(){

}

int main() {

    int a[3] = {3, 8, 1};

    int b[3][3] = {
        {3, 7, 4},
        {2, 1, 8},
        {9, 5, 6}
    };

    sort(a, a + 3); // sort(a, a + n);

    cout << *(a + 2) << " " << a[2] << endl;

    for(int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << b << " " << *b << " " << *(*b + 2) << endl;
    

    sort(*b, *(b + 2) + 3);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}