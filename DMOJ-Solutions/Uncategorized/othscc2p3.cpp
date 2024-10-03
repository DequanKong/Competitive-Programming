#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

int main() {
    boost();
    int n; cin >> n;
    cout << n / 1111 + (n - n / 1111 * 1111) << endl;
}