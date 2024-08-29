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
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define exit return 0;

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX
// A to Z: 65 to 90 | a to z: 97 to 122

// Problem URL: https://dmoj.ca/problem/ccc07j2

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MM = 1000000;

map<string, string>mp;
void setup() {
    mp["CU"] = "see you\n";
    mp[":-)"] = "I'm happy\n";
    mp[":-("] = "I'm unhappy\n";
    mp[";-)"] = "wink\n";
    mp["(~.~)"] = "sleepy\n";
    mp["TA"] = "totally awesome\n";
    mp["CCC"] = "Canadian Computing Competition\n";
    mp["CUZ"] = "because\n";
    mp["TY"] = "thank-you\n";
    mp["YW"] = "you're welcome\n";
    mp["TTYL"] = "talk to you later\n";
    mp[":-P"] = "stick out my tongue\n";
}
int main() {
    boost();
    setup();
    
    
    while(true){
        string s; cin>>s;
        if(mp[s]==""){
            cout<<s<<"\n";
        }
        else cout<<mp[s];
        
        if(s=="TTYL")break;
    }
}
