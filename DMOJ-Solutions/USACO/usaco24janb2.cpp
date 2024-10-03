#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

const int MM = 5e6;
int main() {
    boost();
    int N, S; cin >> N >> S;
    vector<pair<int,int>> p(N+1);
    vector<bool> v(N+1);
    for (int i = 1; i <=N; ++i) cin >> p[i].first >> p[i].second;
    int dir = 1, power = 1, ans = 0;
    for (int i = 0; i < MM and S >= 1 and S <= N; ++i) {
        if (p[S].first == 1 and power >= p[S].second and !v[S]) {
            v[S] = true; ans++;
        }
        if (p[S].first == 0) {
            dir *= -1; power+= p[S].second;
        }
        S += dir * power;
    }
    cout << ans << endl;
}