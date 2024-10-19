#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 505;

int N;
bool reach[MM][MM];
vector<int> gifts[501];

void dfs(int start, int cur) {
    if (reach[start][cur])
        return;
    reach[start][cur] = true;
    for (int g : gifts[cur]) dfs(start, g);
}

void poss() {
    for (int i = 1; i <= N; ++i) dfs(i, i);
}

int main() {
    fast();
    
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        gifts[i].resize(N);
        for (int j = 0; j < N; ++j) {
            cin >> gifts[i][j];
        }
        while (gifts[i].back() != i)
            gifts[i].pop_back();
    }
    poss();
    
    for (int i = 1; i <= N; ++i)
        for (int g : gifts[i])
            if (reach[g][i]) {
                cout << g << endl;
                break;
            }
}