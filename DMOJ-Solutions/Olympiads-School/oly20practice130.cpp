#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n; cin >> n;
    
    vector<ll> a(n + 1, 0), prefix(n + 1, 0);
    
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }
    
    ll minDiff = LLONG_MAX;
    
    for (int L = 2; L < n; ++L) {
        
        int low = L + 1, high = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            
            ll sum1 = prefix[L - 1];
            ll sum2 = prefix[mid - 1] - prefix[L - 1];
            ll sum3 = prefix[n] - prefix[mid - 1];
            
            ll maxSum = max({sum1, sum2, sum3});
            ll minSum = min({sum1, sum2, sum3});
            ll diff = maxSum - minSum;
            
            minDiff = min(minDiff, diff);
            
            if (sum2 < sum3) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    
    cout << minDiff << "\n";
    return 0;
}