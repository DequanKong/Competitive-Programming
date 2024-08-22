#include <bits/stdc++.h>

using namespace std;

// Problem URL: https://dmoj.ca/problem/ccc04j1
int main() {
    int t, x; cin >> t;
    for (int i = 1; i*i <= t; ++i) {
        x = i;
    }
    cout << "The largest square has side length " << x << ".\n";
    return 0;
}
