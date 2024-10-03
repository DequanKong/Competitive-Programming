#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
const int MM = 3e5+3;
int N, a[MM], b[MM]; vector<pi> seg, lft, rit;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++) cin >> a[i];
    for(int i=0; i<N; i++) cin >> b[i];
    for(int l=0, r=0; l<N; l = r){
        while(r <N && b[l]==b[r]) r++;
        seg.push_back({l, r-1});
    }
    for(int i=0, j=0; i<seg.size(); i++) {
        auto [l, r] = seg[i];
        while(j < N && a[j] != b[l]) j++;
        if(j == N) { cout << "NO\n"; return 0;}
        if(l < j) lft.push_back({l, j});
        if(j < r) rit.push_back({j, r});
    }
    cout << "YES\n" << lft.size() + rit.size() << "\n";
    for(auto [l, r] : lft) cout << "L " << l << " " << r << "\n";
    reverse(rit.begin(), rit.end());
    for(auto [l, r] : rit) cout << "R " << l << " " << r << "\n";
}