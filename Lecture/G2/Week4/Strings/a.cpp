#include <iostream>

using namespace std;

int main(){

    char name[] = {'R', 'o', 'm', 'a', 'n', '\0'};

    string otherName = "Eldana";

    cout << name << endl;
    cout << otherName << endl;

    cout << otherName[2] << endl;
    cout << int(otherName[2]) << endl;

    return 0;
}