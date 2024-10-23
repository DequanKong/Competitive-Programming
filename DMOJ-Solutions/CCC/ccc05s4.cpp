#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e6;

int main() {
    fast();
    
    int T; cin >> T;
    for (int i = 0; i < T; ++i) {
        int n; cin >> n;
        vector<string> arr(n+1);
        map<string,int> mp;
        for (int x = 1; x <= n; ++x) {
            cin >> arr[x]; mp[arr[x]] = x;
        }
        arr[0] = arr.back();
        int dep = 0, ma = 0;
        set <string> s;
        for (int x = 0; x < arr.size(); ++x) {
            if (!s.count(arr[x])) { s.insert(arr[x]); dep++; }
            ma = max(ma, dep - 1);
            if (x == mp[arr[x]]) {
                s.erase(s.find(arr[x]));
                dep --;
            }
        }
        cout << n*10 - ma*20 << "\n";
    }
}