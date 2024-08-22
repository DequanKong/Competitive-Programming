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

// Problem URL: https://dmoj.ca/problem/set
int main() {
    int N;
    unordered_set<int> s;
    cin >> N;
    for (int i = 0, j; i < N; i++) {
        cin >> j;
        s.insert(j);
    }
    cout << s.size();
}
