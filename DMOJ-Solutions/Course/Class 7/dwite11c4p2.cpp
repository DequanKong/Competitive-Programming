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

using namespace std;
typedef long long ll;
#define endl '\n';
#define loop(i,a,b) for (int i = a; i < b; ++i)
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define exit return 0;

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX
// A to Z: 65 to 90 | a to z: 97 to 122

// Problem URL: https://dmoj.ca/problem/dwite11c4p2

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

vector<int> sieve(int maxN) {
    vector<bool> isPrime(maxN + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= maxN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= maxN; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= maxN; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

void fact(int N, const vector<int>& primes) {
    vector<int> exponents(primes.size(), 0);

    for (int i = 0; i < primes.size() && primes[i] <= N; i++) {
        int p = primes[i];
        int exponent = 0;

        for (int power = p; power <= N; power *= p) {
            exponent += N / power;
            if (power > N / p) break; // To avoid overflow
        }

        exponents[i] = exponent;
    }

    // Print the result in the required format
    bool first = true;
    for (int i = 0; i < primes.size() && primes[i] <= N; i++) {
        if (exponents[i] > 0) {
            if (!first) cout << " * ";
            cout << primes[i] << "^" << exponents[i];
            first = false;
        }
    }
    cout << endl;
}

int main() {
    int testCases[5];
    for (int i = 0; i < 5; i++) {
        cin >> testCases[i];
    }

    int maxN = *max_element(testCases, testCases + 5);
    vector<int> primes = sieve(maxN);

    for (int i = 0; i < 5; i++) {
        fact(testCases[i], primes);
    }

    return 0;
}
