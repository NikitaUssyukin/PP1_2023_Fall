#include <iostream>
#include <sstream>

using namespace std;

int main() {

    string input;
    string inputString;

    while(getline(cin, input)) {
        inputString.append(input);
        inputString.append(" ");
    }

    istringstream inputStream(inputString);

    string direction;
    int steps;

    int X = 0, Y = 0;

    while(inputStream >> direction >> steps) {
        if (direction == "North") Y += steps;
        if (direction == "South") Y -= steps;
        if (direction == "East") X += steps;
        if (direction == "West") X -= steps;
    }

    cout << X << " " << Y << endl;

    return 0;
}