#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int K, P, X;

double solve(double M) {
    if (M == 0) return INT_MAX;
    return M*X +K*P/M;
}
int main() {
    fast();
    cin >> K >> P >> X;
   
    double M = sqrt(K * P / X);
    double M1 = ceil(M), M2 = floor(M);
    if (M1 == 0 and M2 == 0) M1 = 1;
    
    cout << fixed << setprecision(3) << min(solve(M1),solve(M2)) << "\n";
}