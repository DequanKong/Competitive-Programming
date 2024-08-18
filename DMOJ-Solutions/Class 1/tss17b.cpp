#include <bits/stdc++.h>

using namespace std;
// Problem URL: https://dmoj.ca/problem/tss17b
const int MAXN = 1e6;
typedef long long ll;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int houses, scenarios;
    long long x, y, r;
    
    cin >> houses >> scenarios;
    vector <ll> distances(houses);
    
    for (int i = 0; i < houses; i++) {
        cin >> x >> y;
        distances[i] = x*x+y*y;
    }

    sort(distances.begin(), distances.end());
    
    for (int i = 0; i < scenarios; i++) {
        cin >> r;
        cout << upper_bound(distances.begin(), distances.end(), r*r) - distances.begin() << "\n";
    }
    return 0;
}
