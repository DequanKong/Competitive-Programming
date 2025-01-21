#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1e5+2;
int N, Q, p[MM]; char op;
int fd(int d) { return d==p[d]? d : p[d] = fd(p[d]); }
int main(){
    cin >> N >> Q;
    for(int i=1; i<=N; i++) p[i] = i;
    for(int i=1, u, v; i<=Q; i++) {
        cin >> op >> u >> v;
        if(op == 'A') {
            p[fd(u)] = fd(v);
        }else {
            cout << (fd(u) == fd(v)? "Y\n" : "N\n");
        }
    }
}
