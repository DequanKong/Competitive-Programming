#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e5+2;

int dp[MM][3], en[MM], fr[MM];
int main() {
    fast();
   
    int N; cin >> N;
    for (int i = 1; i <= N; ++i) cin >> fr[i];
    for (int i = 1; i <= N; ++i) cin >> en[i];

    for (int i = 1; i <= N; ++i) {
        dp[i][0] = INT_MIN;
        for (int j = 0; j < 3; j++) dp[i][0] = max(dp[i][0], dp[i-1][j] + en[i]);
        for (int j = 1; j < 3; j++) dp[i][j] = dp[i-1][j-1] + fr[i];
    }
    int ans = INT_MIN;
    for (int i = 0; i < 3; ++i) {
        ans = max(ans,dp[N][i]);
    }
    cout << ans << "\n";
}