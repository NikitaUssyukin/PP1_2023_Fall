// Задача №256. Ферзь
// https://informatics.msk.ru/mod/statements/view.php?id=276&chapterid=256

#include <iostream>

using namespace std;

int main() {

    int a, b;
    int c, d;

    cin >> a >> b >> c >> d;

    if ((a == c || b == d) || (abs(a - c) == abs(b - d))) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}