#include <bits/stdc++.h>

using namespace std;
typedef long long ll; 

int main() {
    ll n, m; cin >> n >> m;
    if (n%m==0) cout << "0\n";
    else {
        if (n<m) cout << m-n << "\n";
        else cout << min(n%m, m - n%m) << "\n";
    }

}