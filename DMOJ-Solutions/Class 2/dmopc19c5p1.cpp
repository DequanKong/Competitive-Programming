#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
// Problem URL: https://dmoj.ca/problem/dmopc19c5p1
int main() {
    list <string> items;
    int N, M, Ti; string si, ri; int output = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> si;
        items.push_back(si);
    }
    for (int i = 0; i < M; i++) {
        cin >> Ti; bool check = true;
        for (int x = 0; x < Ti; x++) {
            cin >> ri;
            if (find(items.begin(), items.end(), ri) == items.end()) check = false;
        }
        if (check) output++;
    }
    cout << output << "\n";
}
