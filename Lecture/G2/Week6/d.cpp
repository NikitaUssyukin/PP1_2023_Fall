#include <iostream>
#include <string>
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

    string input("Int: 52 Double 4.21");

    istringstream inputStream(input);

    inputStream >> line2 >> n >> line3 >> m;

    cout << line2 << " " << n << " "<< line3 << " " << m << endl;

    return 0;
}