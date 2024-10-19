#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 5003;
int N, a[MM], ans[MM];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    memset(ans, 0x3f, sizeof(ans));
    cin >> N;
    for(int i=1; i<=N; i++) cin >> a[i];
    for(int i=1; i<=N; i++) {
        int val = 0;
        for(int l=i, r=i; 1<=l && r<=N; l--, r++) {
            val += abs(a[l] - a[r]);
            ans[r - l + 1] = min(ans[r - l + 1], val);
        }
        val = 0;
        for(int l=i, r=i+1; 1<=l && r<=N; l--, r++) {
            val += abs(a[l] - a[r]);
            ans[r - l + 1] = min(ans[r - l + 1], val);
        }
    }
    for(int i=1; i<=N; i++) cout << ans[i] << " ";
}