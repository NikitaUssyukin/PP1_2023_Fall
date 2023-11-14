#include <iostream>
#include <vector>
 
using namespace std;
 
int rec(int sum, int i, int x, vector<int> &v) {
 
    if (i == x) {
        return sum;
    }
 
    int max = v[0];
    int place = 0;
 
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
            place = i;
        }
    }
 
    v.erase(v.begin() + place);
 
    sum += max;
    i++;
 
    return rec(sum, i, x, v);
}
 
int main() {
    int n;
    cin >> n;
 
    vector<int> v;
 
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
 
   
 
    int x;
    cin >> x;
 
    int result = rec(0, 1, x, v);
 
    cout << result << endl;
 
    return 0;
}