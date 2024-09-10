#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
    int M, N; cin >> M >> N;
    if (N < 45) {
        N = N + 60 - 45;
        if (M == 0) M = 23;
        else M--;
    } else {
        N -= 45;
    }
    cout << M << " " <<  N << endl;
}