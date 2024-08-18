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
typedef long long ll;
// Problem URL: https://dmoj.ca/problem/ccc24j4

int main() {
    string a, b;
    cin >> a >> b;
    if (a.size() == b.size()) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                cout << a[i] << " " << b[i] << "\n-\n"; break;
            }
        }
    } else {
        for (char c = 'a'; c <= 'z'; c++) {
            string cpy = "";
            for (int i = 0; i < a.size(); i++) if (a[i] != c) cpy += a[i];
            pair<char, char> bad = {0,0};
            bool works = true;
            if (cpy.size() != b.size()) continue;
            for (int i = 0; i < cpy.size(); i++) {
                if (cpy[i] != b[i]) {
                    if (bad.first == 0) {
                        bad.first = cpy[i]; bad.second = b[i];
                    } else {
                        if (bad.first != cpy[i]) {
                            works = false; break;
                        }
                    }
                }
            }
            if (works) {
                cout << bad.first << ' ' << bad.second << '\n' << c << '\n';
            }
        }
    }
}
