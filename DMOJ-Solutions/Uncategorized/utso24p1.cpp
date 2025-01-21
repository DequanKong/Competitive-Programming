#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,k;

int main() {
    int n, k; cin >> n >> k;
    ll ans = 0;

    int i = n;
    while (i >= 0) {
        ans += 2 * i;
        int trips = k;
        while (i >= 0 and trips > 0) { trips --; i--;}
    }
    cout << ans << "\n";

    return 0;
}