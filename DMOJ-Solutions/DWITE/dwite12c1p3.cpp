#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc = 5;
    while (tc--) {
        int n; string a,b;
        vector<string> st; unordered_map<string,int> mp;
        cin >> n;
        while (n--) {
            cin >> a >> b;
            mp[b]++;
            if (mp[b] > 1) st.push_back(a);
        }
        if (st.size() == 0) cout << "SPOOKY\n";
        else for (int i = 0; i < st.size(); ++i) cout << st[i] << " \n"[i==st.size()-1];
    }
}