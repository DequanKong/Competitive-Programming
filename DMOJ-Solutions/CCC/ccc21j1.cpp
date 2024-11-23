#include <bits/stdc++.h>

using namespace std;

int main() {
    int x; cin >> x;
    x = 5*x-400;
    cout << x << "\n";
    if (x < 100) cout << "1\n";
    else if (x > 100) cout << "-1\n";
    else cout << "0\n";
    return 0;
}