#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

char s[] = {'A','B'};
ll r[4];
vector<vector<char>> out;

int main() {
    fast();
    
    cin >> r[0] >> r[1];
    int x;
    if (r[0] < r[1]) x = 0;
    else x = 1;
    
    while (r[x]) {
        if (r[x]%2 == 1) {
            out.push_back({s[x^1],'C','C'});
            r[2] += r[x^1];
        }
        out.push_back({s[x ^ 1], s[x ^ 1], s[x ^ 1]});
        r[x^1] *= 2;
        r[x] /= 2;
    }
    cout << out.size() << "\n";
    for (auto x : out) {
        cout << x[0] << " " << x[1] << " " << x[2] << "\n";
    }
    cout << "C" << endl;
    return 0;
    
}