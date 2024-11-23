#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n; int x; bool check = true;
    for (int i = 0; i < n; ++i) {
        int y; cin >> y;
        if (i == 0) x = y;
        else {
            if (y >= x) check = false;
        }
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}