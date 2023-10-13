#include <iostream>
#include <sstream>

using namespace std;

int main() {

    ostringstream outputStream;

    string line1("Numerical values in string:");
    string line2("\nint: ");
    string line3("\ndouble: ");

    int n = 44;
    double m = 12;

    outputStream << line1 << line2 << n << line3 << m << endl;

    cout << outputStream.str();

    cout << outputStream.str().find("int") << endl;

    int position = outputStream.str().find("i");

    int counter = 0;

    while (position != string::npos) {
        counter++;
        position = outputStream.str().find("i", position+1);
    }

    cout << counter << endl;

    string input("Int: 71 Double: 15.45");
    istringstream inputStream(input);

    inputStream >> line2 >> n >> line3 >> m;
    
    cout << line2 << n << line3 << m << endl;

    int value;

    inputStream >> value;

    cout << value << endl;

    if (inputStream.good()) {
        cout << value << endl;
    } else {
        cout << "input stream is not good" << endl;
    }

    return 0;
}