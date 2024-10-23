#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
int K, V; vector<pi> e;
int main(){
    cin >> K;
    for(int n=5000; n>=2; n--){
        while(K >= n*(n-1)/2){
            int st = V+1, ed = V+n;
            if(V > 0) e.emplace_back(V, st);
            for(int i=st; i<ed; i++){
                e.emplace_back(i, i+1);
            }
            e.emplace_back(st, ed);
            K -= n*(n-1)/2;  V += n;
        }
    }
    cout << V << " " << e.size() << "\n";
    for(auto [u, v] : e) cout << u << " " << v << "\n";
}