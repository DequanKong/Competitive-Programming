#include <bits/stdc++.h>

using namespace std;
typedef long double ll;
#define endl "\n";
#define loop(i,a,b) for (int i = a; i < b; i++)
// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

bool cmp(pair<int, string> x, pair <int, string> y){
    return x.first > y.first && x.second > y.second;
}

int main() {
    ll N, T, X; cin >> N; vector <pair <ll, ll>> t(N);
    loop(i,0,N) {
        cin >> t[i].first >> t[i].second;
    }
    sort(t.begin(), t.end()); ll max = 0;
    loop (i, 0, N-1) {
        pair <ll, ll> L = t[i]; pair < ll, ll> R = t[i+1];
        if (abs((R.second-L.second)/(R.first - L.first)) > max) max =abs((R.second-L.second)/(R.first - L.first));
    }
    cout << max;
}