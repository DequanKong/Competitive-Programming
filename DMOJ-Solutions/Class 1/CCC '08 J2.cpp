#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    list <char> L = {'A','B','C','D','E'};
    int n, b = 0;
    while (b!=4) {
        cin >> b;
        cin >> n;
        if (b == 1) {
            for (int i = 0; i < n; i++) {
                L.push_back(L.front());
                L.pop_front();
            }
        } else if (b==2) {
            for (int i = 0; i < n; i++) {
                L.push_front(L.back());
                L.pop_back();
            }
        } else if (b==3) {
            for (int i = 0; i < n; i++) {
                char a = L.front();
                L.pop_front();
                char b = L.front();
                L.pop_front();
                L.push_front(a); L.push_front(b);
            }
        }
    }
    for (auto v: L) {
        cout << v << " ";
    }
    return 0;
}
