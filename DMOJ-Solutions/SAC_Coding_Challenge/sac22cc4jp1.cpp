#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans = 0;
    for (int i = 1; i<=5; ++i) {
        char c; cin >> c;
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'y') ans++;
    }
    if (ans >=2) cout << "good\n";
    else cout << "bad\n";
    return 0;
}