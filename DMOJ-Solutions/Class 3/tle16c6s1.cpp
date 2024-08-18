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
// Problem URL: https://dmoj.ca/problem/tle16c6s1

int main() {
    int T;
    cin >> T;

    unordered_map<string, int> preference;
    for (int i = 0; i < T; ++i) {
        string type;
        cin >> type;
        preference[type] = i;
    }

    int N;
    cin >> N;
    vector<pair<string, int>> problems(N);
    for (int i = 0; i < N; ++i) {
        string type;
        cin >> type;
        problems[i] = make_pair(type, i + 1);
    }

   
    auto compare = [&preference](const pair<string, int>& a, const pair<string, int>& b) {
        if (preference[a.first] == preference[b.first]) {
            return a.second < b.second;
        }
        return preference[a.first] < preference[b.first];
    };

    sort(problems.begin(), problems.end(), compare);

  
    for (const auto& problem : problems) {
        cout << problem.second << endl;
    }

    return 0;
}
