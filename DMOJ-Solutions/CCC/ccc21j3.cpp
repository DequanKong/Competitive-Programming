#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
    string dir = "";
    while (true) {
        char a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (a == '9' and b == '9' and c == '9' and d == '9' and e == '9') return 0;
        int ia, ib; ia = a - '0'; ib = b - '0'; 
        if ((ia+ib) % 2 == 1) {
            cout << "left " << c << d << e << endl;
            dir = "left ";
        } else {
            if (ia + ib != 0) { cout << "right " << c << d << e << endl; dir = "right ";}
            else { cout << dir << c << d << e << endl;}
        }
    }
}