#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    if (n==1) cout << "1\n";
    else if (n<=4) cout << "-1\n";
    else if (n==5) cout << "1 3 5 4 2\n";
    else if (n==6) cout << "1 3 5 4 2 6\n";
    else if (n==7) cout << "1 3 7 5 4 2 6\n";
    else {
        if (n%2==0) {
            for (int i = n-1; i >=1; i-=2) cout << i << " ";
            cout << 8 << " ";
            for (int i = 2; i <= n; i+=2) {
                if (i == 8) continue;
                if (i == n) cout << n << "\n";
                else if (i == 6 and n==8) cout << i << "\n";
                else cout << i << " ";
            }
        } else {
            for (int i = n; i >=1; i-=2) cout << i << " ";
            cout << 8 << " ";
            for (int i = 2; i <= n; i+=2) {
                if (i == 8) continue;
                if (i == n-1) cout << i << "\n";
                else if (i == 6 and n==9) cout << i << "\n";
                else cout << i << " ";
            }
        }
        
    }
}