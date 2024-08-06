#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <list>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <climits>
#include <functional>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <bitset>
#include <complex>
#include <random>

using namespace std;
typedef long double ll;
#define endl "\n";
#define loop(i,a,b) for (int i = a; i < b; i++)
// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

int main() {
    int n; cin >> n; vector<array<int, 3>> box (n);
    loop(i, 0, n) {
        cin >> box[i][0] >> box[i][1] >> box[i][2];
        sort(box[i].begin(), box[i].end());
    }
    sort(box.begin(), box.end(), [&](array<int, 3> x, array<int, 3> y) { return x[0]*x[1]*x[2] < y[0]*y[1]*y[2];});
//    loop (i, 0, n) {
//        cout << box[i][0] << " " << box[i][1] << " " << box[i][2] << endl;
//    }
    int m; cin >> m;
    
    loop (i, 0, m) {
        int a, b, c; cin >> a >> b >> c;
        bool bad = true;
        loop (i, 0, n) {
            if ((a <= box[i][0] && b <= box[i][1] && c <= box[i][2]) || (a <= box[i][0] && b <= box[i][2] && c <= box[i][1])
                || (a <= box[i][1] && b <= box[i][0] && c <= box[i][2]) || (a <= box[i][1] && b <= box[i][2] && c <= box[i][0])
                || (a <= box[i][2] && b <= box[i][1] && c <= box[i][0]) || (a <= box[i][2] && b <= box[i][0] && c <= box[i][1])) {
                cout << box[i][0] * box[i][1] * box[i][2] << endl; bad = false; break;
            }
        }
        if (bad) cout << "Item does not fit." << endl;
    }
}
