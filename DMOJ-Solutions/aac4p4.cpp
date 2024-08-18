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
#include <iterator>

using namespace std;
typedef long long ll;
#define endl '\n';
#define loop(i,a,b) for (int i = a; i < b; ++i)
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define exit return 0;

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX
// A to Z: 65 to 90 | a to z: 97 to 122

// Problem URL: https://dmoj.ca/problem/aac4p4

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

int N, M, S, F, L, R, X = 0; int grid[2000][2000]; int ind = -1;

int main() {
    fast;
    
    memset(grid,0,sizeof(grid));
    cin >> N >> M >> S >> F >> L >> R; vector<int> k(M);
    loop(i,0,M) {
        cin >> k[i];
        if (k[i] == F) {
            ind = i;
        }
    }
    if (L == 0) {
        if (F == S) X = 0;
        else {
            if (ind < 0 || R == 0) {
                cout << -1 << endl; exit;
            }
            grid[S-1][ind] = 1; X++;
        }
    } else {
        if (ind == -1) {
            if (S != F) { cout << -1 << endl; exit;}
            if (L > N*M-M) { cout << -1 << endl; exit; }
            
            loop(i,0,N) {
                loop(j,0,M) {
                    if (i==S-1) continue;
                    if (X == L) break;
                    grid[i][j] = 1; X++;
                }
                if (X == L) break;
            }
        } else {
            if (S != F) {
                if (L > N*M-(M-(ind+1))) { cout << -1 << endl; exit;}
                grid[S-1][ind] = 1; X++;
                loop(i,0,N) {
                    if (i == S-1) continue;
                    if (X == L) break;
                    grid[i][ind] = 1; X++;
                }
                loop(i,0,N) {
                    if (i==F-1) continue;
                    loop(j,0,M) {
                        if (j == ind) continue;
                        if (X == L) break;
                        grid[i][j] = 1; X++;
                    }
                    if (X==L) break;
                }
                loop(i,0,ind) {
                    if (X==L) break;
                    grid[F-1][i] = 1; X++;
                }
            } else {
                if (L > N*M-(M-(ind+1))) { cout << -1 << endl; exit;}
                loop(i,0,N) {
                    if (X == L) break;
                    grid[i][ind] = 1; X++;
                }
                loop(i,0,N) {
                    if (i==F-1) continue;
                    loop(j,0,M) {
                        if (j == ind) continue;
                        if (X == L) break;
                        grid[i][j] = 1; X++;
                    }
                    if (X==L) break;
                }
                loop(i,0,ind) {
                    if (X==L) break;
                    grid[F-1][i] = 1; X++;
                }
            }
        }
    }
    cout << X << endl;
    
    loop(i,0,N) {
        loop(j,0,M) {
            if (j == M-1) cout << grid[i][j];
            else cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
