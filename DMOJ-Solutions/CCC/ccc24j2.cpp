#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    int d; cin >> d;
    while (true) {
        int a; cin >> a;
        if (d>a) d+=a;
        else { cout << d << "\n"; return 0;}
    }
}