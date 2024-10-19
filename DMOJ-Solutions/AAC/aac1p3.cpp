#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int N, X; cin >> N >> X;
    vector<int> v(N);
    if ((N-X) % 2 == 1) { cout << "-1\n"; return 0;}
    for (int i = 0; i <N; ++i) v[i] = 0;
    for (int i = 0; i < (N-X)/2; ++i) v[i*2] = 1;
    for (int i = 0; i < N; ++i) {
        if (i == N-1) cout << v[i] <<"\n";
        else cout << v[i] << " ";
    }
    
}
