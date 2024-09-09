#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    int N; cin >> N;
    while (N--) {
        ll N, M; cin >> N >> M;
        cout << (min(N,M)-1)*2 << endl;
    }
}