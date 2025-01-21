#include <bits/stdc++.h>

using namespace std;

int main() {
    int p,n,r; cin >> p >> n >> r;
    int ans = 0;
    for (int s=0; s<=p; ans++) {
        s+=n; n*=r;
    }
    cout << ans-1 << "\n";
    
    return 0;
}