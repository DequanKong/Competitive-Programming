#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int a,b,c,d,e,f; cin >> a >> b >> c >> d>>e>>f;
    int suma = 3*a+2*b+c, sumb=3*d+2*e+f;
    if (suma>sumb) cout << "A\n";
    else if (suma<sumb) cout << "B\n";
    else cout << "T\n";
}