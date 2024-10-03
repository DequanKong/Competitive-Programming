#include <bits/stdc++.h>
using namespace std;

// Problem URL: https://dmoj.ca/problem/ccc24s1
int main() {
    int N, output = 0;
    cin >> N;
    int numbers [N];
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    
    for (int i = 0; i < N/2; i++) {
        if (numbers[i] == numbers[i+N/2]) {
            output += 2;
        }
    }
    cout << output;
    return 0;
}