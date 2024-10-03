#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

int main() {
    boost();
    string s; cin >> s;
    if (s == "queen") cout << 9 << endl;
    if (s == "rook") cout << 5 << endl;
    if (s == "bishop" or s == "knight") cout <<  3 << endl;
    if (s == "pawn") cout << 1 << endl;
    if (s == "king") cout << "priceless" << endl;
}