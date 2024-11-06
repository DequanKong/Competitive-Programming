#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();

    int N; cin >> N;
    long double ans = LLONG_MAX;
    int arr[101];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    sort(arr,arr+N);
    for (int i = 1; i < N-1; ++i) {
        long double calc = (arr[i]-arr[i-1])/2.0 + (arr[i+1]-arr[i])/2.0 ;
        calc *= 1.0;
//        cout << arr[i]-arr[i-1]/2.0 << " " << calc << "\n";
        if (calc < ans) ans = calc;
    }
    cout << fixed << setprecision(1) << ans << "\n";
}