#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    string s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;
    vector<string> v = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    int min1 = stoi(s1.substr(0,2))*60+stoi(s1.substr(3,2));
    int min2 = stoi(s2.substr(0,2))*60+stoi(s2.substr(3,2));
    int incr1 = stoi(s3.substr(0,2))*60+stoi(s3.substr(3,2));
    int incr2 = stoi(s4.substr(0,2))*60+stoi(s4.substr(3,2));

    ll total = -1;
    for (int i = 0; i <= 1000000; ++i) {
        int n = (min1 + i*incr1 - min2) / incr2;
        if (n >=0 and min1 + i*incr1 == min2 + n*incr2) {
            total = min1 + i*incr1; break;
        }
    }

    if (total == -1) cout << "Never\n";
    else {
        int day = total / (24*60);
        cout << v[day%7] << "\n";
        total %= (24*60);
        int hour = total / 60;
        int min = total % 60;
        if (hour < 10) cout << 0;
        cout << hour << ":";
        if (min < 10) cout << 0;
        cout << min << "\n";
    }
}