#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const ull MOD = 1000000007;

void multiply(ull F[2][2], ull M[2][2]) {
    ull x = (F[0][0] * M[0][0] % MOD + F[0][1] * M[1][0] % MOD) % MOD;
    ull y = (F[0][0] * M[0][1] % MOD + F[0][1] * M[1][1] % MOD) % MOD;
    ull z = (F[1][0] * M[0][0] % MOD + F[1][1] * M[1][0] % MOD) % MOD;
    ull w = (F[1][0] * M[0][1] % MOD + F[1][1] * M[1][1] % MOD) % MOD;
    
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(ull F[2][2], ull n) {
    if (n == 0 || n == 1)
        return;

    ull M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}

ull solve(ull n) {
    if (n == 0)
        return 0;

    ull F[2][2] = {{1, 1}, {1, 0}};
    power(F, n - 1);
    return F[0][0];
}

int main() {
    fast();
    ull n; cin >> n;

    cout << solve(n) << "\n";

    return 0;
}