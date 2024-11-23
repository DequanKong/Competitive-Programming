#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
 
    string s; int n; cin >> n >> s;
    int countL = 0, countR = 0, left = 1, right = n;
    while (left <= n and s[left-1] == s[0]) {
        countL ++; left++;
    }
    
    while (right >= left and s[right-1] == s[0]) {
        countR ++; right--;
    }
    int total = countL + countR;
    if (left > n) cout << "1\n";
    else if (countL and countR) {
        int x = 1, y = total-1;
        for (int i = left-1; i < right; ++i) {
            if (i > 0 and s[i] == s[i-1]) x++;
            else {
                y += x-1; x = 1;
            }
        }
        y += x-1;
        cout << n-y << "\n";
    }
    else cout << n << "\n";
}