#include <bits/stdc++.h>
using namespace std;
// Problem URL: https://dmoj.ca/problem/oly18decp4
const int MM = 1e5+3;
typedef long long ll;
int N, M, a[MM]; ll ans;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    sort(a, a+N);
    for(int i=0; i<N; i++) {
        int idx = upper_bound(a+i+1, a+N, M - a[i]) - a;
        ans += idx - i - 1;
    }
    cout << ans << endl;
}
