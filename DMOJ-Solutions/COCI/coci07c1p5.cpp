#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    int n,b; cin >> n >> b;

    vector<int> a(n); int x;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == b) x = i;
    }
    int delta = 0;
    vector<int> L(2*n+1);
    for (int i = x; i >= 0; --i) {
        if (a[i] < a[x]) delta--;
        else if (a[i] > a[x]) delta++;
        L[n+delta] += 1;
    }
    delta = 0;
    vector<int> R(2*n+1);
    for( int i = x; i < n; ++i ) {
        if (a[i] < a[x]) delta--;
        else if (a[i] > a[x]) delta++;
        R[n+delta] += 1;
    }

    int ans = 0;
    for( delta = -n; delta <= n; ++delta )
       ans += L[n+delta] * R[n-delta];
    cout<< ans << "\n";
}