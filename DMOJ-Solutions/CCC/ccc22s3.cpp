#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1e6+3;
int N, M, a[MM]; ll K; deque<int> q;
int main() {
    cin >> N >> M >> K;
    if(K < N) { cout << "-1\n"; return 0; }
    K -= N; a[1] = 1; q.push_back(1);
    int last = 1;
    for(int i=2; i<=N; i++) {
        if(K >= q.size()){
            last++;
            if(last <= M) {
                K -= last - 1;  a[i] = last; q.push_back(last);
            }else {
                a[i] = q.front(); q.pop_front();
                K -= M-1; q.push_back(a[i]);
            }
        }else {
            a[i] = q[(int)q.size()-1-K]; K = 0;
            q.push_back(a[i]);
        }
    }
    if(K) cout << "-1\n";
    else for(int i=1; i<=N; i++) cout << a[i] << " \n"[i==N];
}