#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n; cin >> n;
    while (n--) {
        string s; cin >> s; int sum = 0;
        for (char c: s) {
            sum += c - '0';
        }
        if (sum % 3 == 0) cout << "yes\n";
        else cout << "no\n";
    }
   
}