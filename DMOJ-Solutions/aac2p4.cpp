#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n';
#define loop(i,a,b) for (int i = a; i < b; ++i)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define exit return 0;

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX
// A to Z: 65 to 90 | a to z: 97 to 122

// Problem URL: https://dmoj.ca/problem/aac2p4

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MM = 1000001;

int main() {
    fast;
    int T; cin >> T; int N;
    loop(i,0,T) {
        cin >> N; vector<int> a(N);
        bool same = true;
        loop(i,0, N) {
            cin >> a[i];
            if (i != 0) {
                if (a[i] != a[i-1]) {
                    same = false;
                }
            }
        }
        sort(a.begin(),a.end());
        if (N%2==1) {
            loop(i,0,N) {
                if (i==N-1) {
                    cout << a[i] << endl;
                } else {
                    cout << a[i] << " ";
                }
            }
        } else {
            if (same) {
                cout << -1 << endl;
            } else {
                for (int i = 0; i<N/2; i++) {
                    if (i==N/2-1) {
                        cout << a[i] << " " << a[i+N/2] << endl;
                    } else {
                        cout << a[i] << " " << a[i+N/2] << " ";
                    }
                }
            }
        }
    }
    return 0;
}
