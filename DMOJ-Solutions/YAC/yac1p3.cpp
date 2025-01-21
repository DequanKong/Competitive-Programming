#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n,t; cin >> n >> t;
    while (t--) {
        if (n%2 == 0) {
            cout << "2" << endl;
            int x = -1, y = -1;
            while (!(x==0 and y==0)) {
                cin >> x >> y;
                if (!(x == 0 and y == 0))
                cout << n+1-x << " " << n+1-y << endl;
            }
        } else {
            cout << "1\n" << n/2+1 << " " << n/2+1 << endl;
            int x = -1, y = -1;
            while (!(x==0 and y==0)) {
                cin >> x >> y;
                if (!(x == 0 and y == 0))
                cout << n+1-x << " " << n+1-y << endl;
            }
        }
    }
}