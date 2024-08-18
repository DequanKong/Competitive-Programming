#include <bits/stdc++.h>

using namespace std;
// Problem URL: https://dmoj.ca/problem/dmopc17c1p1

int rows, cols, query;
int thisCol, thisRow;
string input;
bool checkerRow[1002];
bool checkerCol[1002];

int main() {
    
  cin >> rows >> cols;
  
  for (int i = 0; i < rows; i++) {
    cin >> input;
    for (int j = 0; j < cols; j++) {
      if (input.at(j) == 'X') {
        checkerCol[j] = true;
        checkerRow[i] = true;
      }
    }
  }
  
  cin >> query;
  
  for (int i = 0; i < query; i++) {
    cin >> thisCol >> thisRow;
    
    if (checkerRow[thisRow-1] == true || checkerCol[thisCol-1] == true) {
      cout << 'Y' << endl;
    } else {
      cout << 'N' << endl;
    }
    

  }
    return 0;
}
