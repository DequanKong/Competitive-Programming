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
#include <cassert>

// #include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 2e5+1;
const int MAX_LOG = 18;

queue<int> path;
int steps;
bool visited[MM];
int destinations[MM];
int pathlength[MM];

void dfs(int planet) {
    path.push(planet);
    if (visited[planet]) {
        steps += pathlength[planet];
        return;
    }
    visited[planet] = true;
    steps++;
    dfs(destinations[planet]);
}
int main() {
    fast();

    int N; cin >> N;
    
    for (int i = 0; i < N; ++i) { cin >> destinations[i]; destinations[i]--;}
    for (int i = 0; i < N; ++i) {
        if (!visited[i]) {
            steps = 0;
            dfs(i);
            int decrement = 1;
            while (!path.empty()) {
                if (path.front() == path.back()) decrement = 0;
                pathlength[path.front()] = steps;
                steps -= decrement;
                path.pop();
            }
        }
    }
    for (int i = 0; i < N; i++) { cout << pathlength[i] << " "; }
    cout << "\n";
}
