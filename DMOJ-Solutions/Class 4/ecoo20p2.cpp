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
// Problem URL: https://dmoj.ca/problem/ecoo20p2

int main() {
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        int sum = 0;
        map <string, vector<pair<int, int>>> mp;
        int N; cin >> N; // # stores
        for (int i = 0; i < N; i++) {
            int M; cin >> M;
            for (int i = 0, j, k; i < M; i++) {
                string s; cin >> s >> j >> k;
                mp[s].push_back({j,k});
                sort(mp[s].begin(), mp[s].end());
            }
        }
        int K; cin >> K; // purchases
        for (int i = 0, j; i < K; i++) {
            string s; cin >> s >> j;
            for (int x = 0; x < mp[s].size(); x++) {
                if (j <= mp[s][x].second) {
                    sum += mp[s][x].first*j; break;
                } else {
                    sum += mp[s][x].first*(mp[s][x].second); j -= mp[s][x].second;
                }
            }
        }
        cout << sum << "\n";
    }
}
