#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc = 5;
    while (tc--) {
        string a,b; cin >> a >> b;
        vector<char> v1(255),v2(255),ans(255);
        vector<int> incr(255); bool check = false;
        for (int i = 0; i < 255; ++i) {
            v1[i] = 'A'; v2[i] = 'A'; ans[i] = 'A';
        }
        for (int i = a.size()-1; i >=0; --i) v1[a.size()-1-i] = a[i];
        for (int i = b.size()-1; i >=0; --i) v2[b.size()-1-i] = b[i];
        for (int i = 0; i < 254; ++i) {
            int n1 = v1[i] - 'A', n2 = v2[i] - 'A', sum = (n1+n2+incr[i])%26;
            if (n1+n2+incr[i]>=26) incr[i+1]++;
            ans[i] = (char) ('A' + sum);
        }
        for (int i = 254; i >= 0; --i) {
            if (ans[i] != 'A') {
                if (!check) check = true;
                cout << ans[i];
            } else if (check) cout << ans[i];
        }
        cout << "\n";
    }
}