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

using namespace std;
typedef long long ll;
/*
 short int and int: -32,767 to 32,767
 long int: -2,147,483,647 to 2,147,483,647
 long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
 */

int main() {
    cin.sync_with_stdio();
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;
    
    unordered_map<int, int> people;
    unordered_map<int, bool> seats;
    stack<int> stack;
    
    for (int i = 0; i < K; i++) {
        int seat;
        cin >> seat;
        seats[seat] = true;
    }
    
    for (int i = 1; i <= K + 1; i++) {
        int person;
        cin >> person;
        people[person] = i;
    }
    
    for (int i = 1; i <= N; i++) {
        if (people.find(i) != people.end()) {
            stack.push(people[i]);
        }
        
        if (seats.find(i) != seats.end() && !stack.empty()) {
            stack.pop();
            seats.erase(i);
        }
    }
    
    while (stack.size() > 1) {
        for (int i = 1; i <= N; i++) {
            if (seats.find(i) != seats.end() && seats[i]) {
                stack.pop();
                seats.erase(i);
            }
        }
    }
    
    cout << stack.top() << "\n";
    stack.pop();
}
