#include <iostream>
#include <string>


using namespace std;

int main() {

    string sentence = "The class template basic_string stores and manipulates sequences of char-like objects, which are non-array objects of trivial standard-layout type.";

    //substr

    int positionStart = sentence.find("template");
    int postitionEnd = sentence.find("stores");
    cout << positionStart << " " << postitionEnd << " " << postitionEnd - positionStart << endl;
    string partOfTheSentence = sentence.substr(positionStart, postitionEnd - positionStart);
    
    cout << partOfTheSentence << endl;

    string sentence2 = sentence.substr(); // default parameters: (0UL, string::npos)

    cout << sentence2 << endl;

    //insert
    string word = "cat";
    word.insert(1, "omb");
    cout << word << endl;

    word = "cat";
    word.insert(1, "wombat", 1, 3);
    cout << word << endl;

    return 0;
}