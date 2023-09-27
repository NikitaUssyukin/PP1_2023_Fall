//post-increment and pre-increment

#include <iostream> 

using namespace std;

int main(){

    int a = 0;

    // while(a < 10){
    //     cout << (a++) + (++a) << endl;
    // }

    // a++, ++a are equal to a = a + 1

    cout << ++a << endl;
    cout << a++ << endl;

    cout << a << endl; //here we will get 2

    cout << (a++) + (++a) << endl;

    return 0;
}