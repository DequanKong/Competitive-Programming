#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        int a[N]; bool check[N];
        memset(check,0,sizeof(check));
        for (int i = 0; i < N; ++i) {
            cin >> a[i]; a[i]--;
            if ((i>0 and a[i] == a[i-1]) or (i>1 and a[i] == a[i-2])) check[a[i]] = true;
           
        }
        bool yes = false;
        for (int i  =0; i < N; ++i) {
            if (check[i]) {
                yes = true; cout << i+1 << " ";
            }
        }
        if (!yes) cout << -1;
        cout << endl;
    }
}