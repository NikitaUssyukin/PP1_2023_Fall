#include <iostream>

using namespace std;

int main() {

    string greeting = "Balzhan";
    string university("KBTU");

    // errors
    // string error1 = 's';
    // string error2('s');
    // string error3 = 22;
    // string error4(22);

    string s;
    s = 'c'; // you can't initialize string with char, but you can initialize
             // an empty string and then assign char data to it
    cout << s << endl;
    s = 100; // this way we assign a symbol using ASCII code
    cout << s << endl;

    cout << (greeting < university) << " " << (greeting == university) << " " << (greeting >= university) << "\n";

    cout << greeting.compare(university) << endl;

    cout << int('B' - 'K') << endl;

    string animal = "cat";
    string something = animal; 

    animal[0] = something[2] = 'r'; // this works from right to left

    cout << animal << " " << something << endl;

    // concatenation
    cout << animal + " is an animal." << endl;

    animal += " is an animal.";

    cout << animal << endl;

    // append
    animal.append(" Who could have thought?");

    cout << animal << endl;

    string nobody = " Nobody could.";

    animal.append(nobody, 0, 8);

    animal.append(nobody, 8, 6);

    cout << animal << endl;



    // input, getline

    string input;

    // cin >> input; // takes symbols before first whitespace character
   
    // getline(cin, input); // takes symbols before first newline

    // cout << input << endl;

    // getline(cin, input, '!'); // delimiter example

    // cout << input << endl;



    // output

    string output = animal;

    // cout << output[100] << " " << output.at(100) << endl; // difference between [100] and .at(100)

    // stoi

    string year = "2023 year";

    // cout << int(year) << endl; // we can't do that

    cout << stoi(year) << endl; // but we can do this

    return 0;
}