#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 2e5+2;
int N, K, T, a[MM], ans[MM];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> K >> T;
    for(int i=1; i<=K; i++) cin >> a[i];
    a[K+1] = N;
    for(int i=1; i<=K; i++) {
        int d = a[i+1] - a[i];
        for(int j=0; j<d; j++){
            int pos = (a[i] + j + (T - j + d - 1) / d * d) % N;
            ans[pos] = a[i] + j;
        }
    }
    for(int i=0; i<N; i++) cout << ans[i] << " \n"[i==N-1];
}