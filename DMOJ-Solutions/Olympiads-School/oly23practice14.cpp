#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> nextHouse, vis, dep, result;

void dfs(int cur) {
    vis[cur] = 1;
    int nxt = nextHouse[cur];

    if (vis[nxt] == 1) {
        int cycleLength = dep[cur] - dep[nxt] + 1;

        int cycleNode = nxt;
        do {
            result[cycleNode] = cycleLength;
            cycleNode = nextHouse[cycleNode];
        } while (cycleNode != nxt);
    } else if (vis[nxt] == 0) {
        dep[nxt] = dep[cur] + 1;
        dfs(nxt);
    }
    vis[cur] = 2;

    if (result[cur] == -1) {
        result[cur] = result[nxt] + 1;
    }
}

int main() {
    int n;
    cin >> n;

    nextHouse.resize(n + 1);
    vis.assign(n + 1, 0);
    dep.assign(n + 1, 0);
    result.assign(n + 1, -1);

    for (int i = 1; i <= n; ++i) {
        cin >> nextHouse[i];
    }

    for (int i = 1; i <= n; ++i) {
        if (vis[i] == 0) {
            dfs(i);
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << result[i] << "\n";
    }

    return 0;
}