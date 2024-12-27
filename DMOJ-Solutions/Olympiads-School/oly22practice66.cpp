#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n,k,x,y; cin >> n >> k >> x >> y;
    if (n > k) cout << (n-k)*y+k*x << "\n";
    else cout << n*x << "\n";
}