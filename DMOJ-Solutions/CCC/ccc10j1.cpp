#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

int main() {
    boost();
    int n; cin >> n; int ans = 0;
    if (n == 1) { cout << 1 << endl; return 0;}
    if (n <= 5) cout << n / 2 + 1 << endl;
    if (n == 6) cout << 3 << endl;
    if (n == 7 or n == 8) cout << 2 << endl;
    if (n == 9 or n == 10) cout << 1 << endl;
}