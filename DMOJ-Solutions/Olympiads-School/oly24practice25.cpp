#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


vector<vector<int>> rotate90(const vector<vector<int>>& board) {
    int n = board.size();
    vector<vector<int>> rotated(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            rotated[j][n - i - 1] = board[i][j];
        }
    }
    return rotated;
}

bool check(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] == 1 && B[i][j] != 1) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    fast();
    int n; cin >> n;

    vector<vector<int>> A(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }

    vector<vector<int>> B(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> B[i][j];
        }
    }

    for (int rot = 0; rot < 4; ++rot) {
        if (check(A, B)) {
            cout << "Yes" << endl;
            return 0;
        }
        A = rotate90(A);
    }

    cout << "No" << endl;
    return 0;
}