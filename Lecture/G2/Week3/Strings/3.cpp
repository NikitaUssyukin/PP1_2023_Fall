#include <iostream> 

using namespace std;

int main(){

    string a, b;

    a = "Abc";
    b = "ABC";

    cout << int('b') << " " << int('B') << endl;

    cout << (a == b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a != b) << endl;

    return 0;
}