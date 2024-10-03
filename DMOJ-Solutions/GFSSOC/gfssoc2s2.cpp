#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

// HEARTHSTONE PROBLEM !!!!!!111!11!!!!!
int main() {
    boost();
    
    int N, mana; cin >> N >> mana;
    vector<pair<int,string>> v(N);
    for (int i = 0; i < N; ++i) {
        string s; int c; cin >> s >> c; v[i] = {c,s};
    }
    vector<vector<string>> ans;
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i+1; j < N-1; ++j) {
            for (int k = j+1; k < N; ++k) {
                if (v[i].first + v[j].first + v[k].first <= mana) {
                    vector <string> v2; v2.push_back(v[i].second);v2.push_back(v[j].second);v2.push_back(v[k].second);
                    sort(v2.begin(),v2.end());
                    ans.push_back(v2);
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    }
}