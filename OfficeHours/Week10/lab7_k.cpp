// example

int rec(int k, vector<int> &v) {
    if(k == 0) return 0;
    int temp = v.back();
    v.pop_back();
    return temp + rec(k - 1, v);

    // v.erase(v.begin() + maxInd);
}

// 0 1 2 3 4 5 6
   |             |
   |             |
   v.begin()     v.end()