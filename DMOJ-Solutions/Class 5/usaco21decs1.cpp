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
#include <assert.h>

using namespace std;
typedef long long ll;
#define endl "\n";
#define loop(i,a,b) for (int i = a; i < b; ++i)
// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

// Problem URL: https://dmoj.ca/problem/usaco21decs1
int main() {
    int K, M, N;
    cin >> K >> M >> N;
    vector<pair<int, int>> patches(K + M);
    
    for (int i = 0; i < K; ++i) {
        cin >> patches[i].first >> patches[i].second;
    }
    
    for (int i = K; i < K + M; ++i) {
        cin >> patches[i].first;
        patches[i].second = -1;
    }
    
    sort(patches.begin(), patches.end());
    
    vector<ll> increases;
    int last_i = -1;
    ll sum_range = 0;
    
    for (int i = 0; i < (int)patches.size(); ++i) {
        if (patches[i].second == -1) {
            if (last_i == -1) {
                increases.push_back(sum_range);
            } else {
                ll cur_ans_1 = 0;
                ll best_ans_1 = 0;
                
                for (int j = last_i + 1, r = last_i; j < i; ++j) {
                    while (r + 1 < i &&
                           (patches[r + 1].first - patches[j].first) * 2 <
                           patches[i].first - patches[last_i].first) {
                        cur_ans_1 += patches[++r].second;
                    }
                    best_ans_1 = max(best_ans_1, cur_ans_1);
                    cur_ans_1 -= patches[j].second;
                }
                
                assert(2 * best_ans_1 >= sum_range);
                
                increases.push_back(best_ans_1);
                increases.push_back(sum_range - best_ans_1);
            }
            last_i = i;
            sum_range = 0;
        } else {
            sum_range += patches[i].second;
        }
    }
    
    increases.push_back(sum_range);
    sort(increases.begin(), increases.end(), greater<ll>());
    increases.resize(N);
    ll ans = 0;
    
    for (auto val : increases)
        ans += val;
    
    cout << ans << "\n";
}
