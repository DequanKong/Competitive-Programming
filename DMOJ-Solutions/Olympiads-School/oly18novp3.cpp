#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1e5+2;
int N, M, a[MM]; ll lo, hi, ans;
bool check(ll lmt){
    ll sum = 0, cnt = 1;
    for(int i=1; i<=N; i++) {
        if(sum + a[i] <= lmt) {
            sum += a[i];
        }else {
            cnt++; sum = a[i];
        }
    }
    return cnt <= M;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    for(int i=1; i<=N; i++) {
        cin >> a[i];
        lo = max(lo, (ll)a[i]);  hi += a[i];
    }
    while(lo <= hi) {
        ll mid = (lo + hi)/2;
        if(check(mid)) { ans = mid; hi = mid - 1;}
        else lo = mid + 1;
    }
    cout << ans << endl;
}