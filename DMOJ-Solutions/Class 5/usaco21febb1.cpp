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
#define loop(i,a,b) for (int i = a; i < b; i++)
// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

// Problem URL: https://dmoj.ca/problem/usaco21febb1
int main() {
    int N; cin >> N; vector<string> zod = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
    map<string, pair<string, int>> mp; mp["Bessie"] = {"Ox", 0};
    loop (i, 0, N) {
        string bad, ncow, ocow, z, ord;
        cin >> ncow >> bad >> bad >> ord >> z >> bad >> bad >> ocow;
        mp[ncow].first = z;
        int oind = distance(zod.begin(), find(zod.begin(), zod.end(), mp[ocow].first));
        int nind = distance(zod.begin(), find(zod.begin(), zod.end(), z));
        if (ord == "previous") {
            if (oind == nind) mp[ncow].second = mp[ocow].second - 12;
            else mp[ncow].second = mp[ocow].second - ((12+oind - nind)%12);
        } else {
            if (oind == nind) mp[ncow].second = mp[ocow].second + 12;
            else mp[ncow].second = mp[ocow].second + ((12+nind - oind)%12);
        }
    }
    cout << abs(mp["Elsie"].second - mp["Bessie"].second);
}
