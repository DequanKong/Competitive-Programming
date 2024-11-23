#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    int l; cin  >> l;
    while (l--) {
        int x; char c; cin >> x >> c;
        for (int i = 0; i < x; ++i) cout << c;
        cout << "\n";
    }
}