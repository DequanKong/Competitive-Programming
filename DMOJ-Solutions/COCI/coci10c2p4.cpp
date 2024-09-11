#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
    int N; cin >> N;
    vector<ll> v(N); 
    for (int i = 0; i < N; ++i) cin >> v[i];
    int last = N;
    for (int i = N-1; i >=0; --i) {
        if (v[i] == last) last --;
    }
    cout << last << endl;
    
}