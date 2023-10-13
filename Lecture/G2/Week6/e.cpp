#include <iostream>
#include <string>
#include <sstream>


using namespace std;

int main() {

    string abc = "abc";
    string xyz = "xyz";

    cout << (abc < xyz) << " " << (abc >= xyz) << " " << (abc == xyz) << endl;

    cout << abc.compare(xyz) << endl;

    string name = "Nikita";
    string shortName = "Nik";

    cout << shortName.compare(0, 2, name) << endl;

    return 0;
}