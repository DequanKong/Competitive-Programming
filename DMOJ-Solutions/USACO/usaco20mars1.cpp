#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pl;
int N, M; vector<pl> vec; ll ans;
bool check(ll d){
    int cows = 0; ll last = -1e18;
    for(pl e: vec){
        while(max(last+d, e.first) <= e.second){
            last = max(last+d, e.first); cows++;
            if(cows >= N) return true;
        }
    }
    return false;
}
int main(){
    cin >> N >> M; vec.resize(M);
    for(int i=0; i<M; i++){
        cin >> vec[i].first >> vec[i].second;
    }
    sort(vec.begin(), vec.end());
    ll lo = 1, hi = 1e18;
    while(lo <= hi){
        ll mid = (lo + hi)/2;
        if( check(mid) ) { ans = mid; lo = mid + 1; }
        else hi = mid - 1;
    }
    cout << ans << "\n";
}