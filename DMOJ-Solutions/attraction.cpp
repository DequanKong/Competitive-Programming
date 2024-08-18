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
#define endl "\n";
#define loop(i,a,b) for (int i = a; i < b; ++i)
// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

// Problem URL: https://dmoj.ca/problem/attraction
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T, N, A, B, Pi;
    cin >> T;
    loop(i,0,T) {
        cin >> N >> A >> B; vector <int> fixed (A);
        loop (i, 0, A) {
            cin >> Pi; fixed[i] = Pi;
        }
        sort(fixed.begin(), fixed.end());
        priority_queue<pair<int,int>> nums;
        nums.push({fixed[0]-1,0});
        nums.push({N-fixed[A-1],0});

        for (int i = 0; i < A-1; i++) {
            int R = fixed[i+1]; int L = fixed[i]; int D = R-L-1;
            if (D % 2 == 0) {
                if (D != 0) {
                    nums.push({D/2,3});
                }
            } else {
                if (D==1) nums.push({1,0});
                else {
                    nums.push({D/2+1,1}); // nums.push_back(1); nums.push_back(D/2-1);
                }
            }
        }
        int sum =  0;
        while (!nums.empty() && B > 0) {
            sum += nums.top().first;
            if (nums.top().second == 1) {
                nums.push({nums.top().first-2,2});
            } else if (nums.top().second == 2) {
                nums.push({1,0});
            } else if (nums.top().second == 3) {
                nums.push({nums.top().first,0});
            }
            nums.pop();
            B--;
        }
        cout << sum << endl;
    }
}
