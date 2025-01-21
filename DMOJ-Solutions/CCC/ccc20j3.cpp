#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n; cin >> n;
    vector<int> x(n),y(n);
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> x[i] >> c >> y[i];
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    cout << x[0]-1 << "," << y[0]-1 << "\n" << x[n-1]+1 << "," << y[n-1]+1 << "\n";
}