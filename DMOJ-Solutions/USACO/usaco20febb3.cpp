#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e5+3;
int N, M, K, ans[MM], nxt[MM], cow[MM]; bool vis[MM];
int main(){
    fast();
    
    cin >> N >> K;
    for(int i=1; i<=N; i++) cow[i] = i;
    for(int i=1, L, R; i<=2; i++) {
        cin >> L >> R;
        reverse(cow+L, cow+R+1);
    }
    for(int i=1; i<=N; i++) nxt[cow[i]] = i;
    for(int i=1; i<=N; i++) {
        if(vis[i]) continue;
        int cur = i; vector<int> cycle;
        for( ; !vis[cur]; cur = nxt[cur]){
            vis[cur] = true;  cycle.push_back(cur);
        }
        int rem = K % cycle.size();
        for(int k=0; k<cycle.size(); k++) {
            int pos = cycle[(k + rem)%cycle.size()];
            ans[pos] = cycle[k];
        }
    }
    for(int i=1; i<=N; i++) cout << ans[i] << "\n";
}