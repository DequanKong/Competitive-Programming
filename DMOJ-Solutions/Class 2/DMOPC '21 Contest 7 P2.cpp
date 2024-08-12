#include <bits/stdc++.h>

using namespace std;
const int MM = 1e6+5;
int N, Q, pre[MM], nxt[MM];
int main() {
    cin >> N >> Q;
    nxt[0] = 1; pre[N+1] = N;
    for (int i = 1; i <= N; i++) {
        pre[i] = i-1; nxt[i] = i+1;
    }
    for (int i = 1, l, r, k; i <= Q; i++) {
        cin >> l >> r >> k;
        if (pre[l] == k) continue;
        int nk = nxt[k], pl = pre[l], nr = nxt[r];
        nxt[pl] = nr; pre[nr]=pl;
        nxt[k]=l; pre[l] = k;
        nxt[r]=nk; pre[nk]=r;
    }
    for (int i = nxt[0]; i<N+1; i=nxt[i]) cout << i << " ";
    return 0;
}
