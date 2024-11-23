#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n, k; cin >> n >> k;
    int ans = (k+1)*80-n*k ;
    if (ans > 100) cout << "-1\n";
    else if (ans < 0) cout << "0\n";
    else cout << (k+1)*80-n*k << "\n";
}