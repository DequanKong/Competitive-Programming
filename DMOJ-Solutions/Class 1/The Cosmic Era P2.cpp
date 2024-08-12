#include <bits/stdc++.h>

using namespace std;

int main() {
    long long max = 2*pow(10,9), min = 1;
    long long m = floor(min+max)/2;
    string s = "";
    while (s != "OK") {
        cout << m << "\n";
        cin >> s;
        if (s!= "OK") {
            if (s == "SINKS") {
                min = m+1;
            } else {
                max = m-1;
            }
            m = floor((min+max)/2);
        }
    }
    return 0;
}
