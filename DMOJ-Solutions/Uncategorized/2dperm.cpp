#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 5000*5000+5;
int diff[MM];
int main() {
    fast();
    memset(diff,0,sizeof(diff));
    int N, M, Q; cin >> N >> M >> Q;
    diff[0] = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            int small = i*j, big = M*N - (N - i + 1)*(M - j +1) + 1;
            diff[small] ++; diff[big+1] --;
        }
    }
    for (int i = 1; i <= N*M; ++i) diff[i] += diff[i-1];
    for (int i = 0; i < Q; ++i) {
        int x; cin >> x;
        cout << diff[x] << "\n";
    }
}