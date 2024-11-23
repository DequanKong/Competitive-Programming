#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e5+5;
int dis[MM];
int n,m;
int solve(int length) {
    int count = 1, curr = dis[0];
    for (int i = 0; i < n; ++i) {
        if (dis[i] >= curr + length) {
            curr = dis[i]; count++;
        }
    }
    return count;
}

int main() {
    fast();
    
    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> dis[i];
    sort(dis,dis+n);
    
    int left=0, right=INT_MAX;
    while (left+1<right) {
        int mid=(left+right)/2;
        if (solve(mid)<m) {
            right=mid;
        }
        else {
            left=mid;
        }
    }
    cout << left << "\n";
}