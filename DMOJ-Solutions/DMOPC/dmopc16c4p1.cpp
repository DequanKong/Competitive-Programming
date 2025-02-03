#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    while (n--) {
        ll a; cin>>a;
        if (a==1) cout << "T\n";
        else if (a==2) cout << "T\n";
        else if (a%2 == 1) cout << "F\n";
        else {
            bool check = true;
            while (a >2) {
                a /= 2;
                if (a%2 == 1) {cout << "F\n"; check = false; break;}
            }
            if (check) cout << "T\n";
        }
    }
}