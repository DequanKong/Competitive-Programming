#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int N, M, K; vector<int> cow, trough;

bool check(int lmt) {
    int cnt = 0;
    for(int i=0, j=0; j<M; j++) {
        while(i < N && cow[i] - K <= trough[j] && trough[j] <= cow[i] && cnt < lmt){
            i++;  cnt++;
        }
        cnt = 0;
        if(i == N) return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M >> K;
    cow.resize(N); trough.resize(M);
    for(int i=0; i<N; i++) cin >> cow[i];
    for(int i=0; i<M; i++) cin >> trough[i];
    sort(cow.begin(), cow.end());
    sort(trough.begin(), trough.end());
    int lo = 1, hi = N, ans = -1;
    while(lo <= hi) {
        int mid = (lo + hi)/2;
        if(check(mid)) { ans = mid; hi = mid - 1;}
        else lo = mid + 1;
    }
    cout << ans << "\n";
}