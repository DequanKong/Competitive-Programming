#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5e5+5;
vector<int> adj[MAXN];
int par[MAXN], d[MAXN], d1[MAXN], d2[MAXN];

void dfs(int u, int p, int dist[], int &maxn, int &i)
{
    par[u] = p;
    if (dist[u] > maxn) maxn = dist[u], i = u;
    for (int v : adj[u])
        if (v != p)
            dist[v] = dist[u]+1, dfs(v, u, dist, maxn, i);
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int N, u, v;
    cin >> N;
    for (int i = 0; i < N-1; i++)
        cin >> u >> v, adj[u].push_back(v), adj[v].push_back(u);

    int a = 0, b = 0, c = 0, i, j, k;
    d[1] = 0;
    dfs(1, -1, d, a, i);
    d1[i] = 0;
    dfs(i, -1, d1, b, j);
    d2[j] = 0;
    dfs(j, -1, d2, c, k);
    for (int i = 1; i <= N; i++)
        cout << max(d1[i], d2[i]) + 1 << '\n';

    return 0;
}