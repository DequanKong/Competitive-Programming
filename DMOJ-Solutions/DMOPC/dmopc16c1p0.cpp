#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    if (n == 3 and m >= 95) cout << "C.C. is absolutely satisfied with her pizza.";
    else if (n == 1 and m <= 50) cout << "C.C. is fairly satisfied with her pizza.";
    else cout << "C.C. is very satisfied with her pizza.";
    return 0;
}