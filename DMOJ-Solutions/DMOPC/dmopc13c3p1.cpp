#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    fast();
    int n, m; cin >> n >> m;
    vector<pair<int,int>> nums; vector<string> strs;
    for (int i = 0; i < m; ++i) {
        int a,b; string s; cin >> a >> b; cin.ignore(); getline(cin,s);
        nums.push_back({a,b}); strs.push_back(s);
    }
    int x; cin >> x;
    for (int i = 0; i < nums.size(); ++i) {
        int b = nums[i].second;
        if (b == x) cout << strs[i] << "\n";
    }
}