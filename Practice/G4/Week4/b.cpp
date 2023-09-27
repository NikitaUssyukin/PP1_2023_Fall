//for, while, do while

#include <iostream> 

using namespace std;

int main(){

    int i = 0;

    while(i < 10) {
        cout << "Hello to you all " << i << " times" << endl;
        i+=2;
    }

    for(int j = 0; j < 10; j+=2) {
        cout << "Hello to you all " << j << " times" << endl;
    }

    i = 10;

    do {
        cout << i << endl;
        i++;
    } while(i < 10);

    return 0;
}