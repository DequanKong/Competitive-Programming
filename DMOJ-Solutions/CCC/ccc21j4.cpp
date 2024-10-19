#include <bits/stdc++.h>
using namespace std;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {

	string seq;
	cin >> seq;

	vector<int> pos[3];
	int n = seq.size();
	for (auto& v : pos)
		v.reserve(n);
	for (int i = 0; i < n; ++i)
		switch (seq[i]) {
			case 'L': pos[0].push_back(i); break;
			case 'M': pos[1].push_back(i); break;
			case 'S': pos[2].push_back(i); break;
			default: break;
		}


	int swaps = 0;

	int numL = pos[0].size(),
		numM = pos[1].size(),
		numS = pos[2].size();
	for (int i = numL-1, j = 0, k = 0; i >= 0; --i) {
		int l = pos[0][i];
		int m = pos[1][j];
		int s = pos[2][k];
		if (l < numL)
			break;

		bool inS = l >= numL + numM;
		bool noM = m >= numL;
		bool noS = s >= numL;

		if (inS) {
			if (!noS) {
				++k;
			}
			else {
				++j;
				swap(seq[l], seq[m]);
			}
		}
		else { // inM
			if (!noM) {
				++j;
			}
			else {
				++k;
			}
		}

		++swaps;
	}

	for (int i = n-1; i >= numL + numM; --i)
		if (seq[i] == 'M')
			++swaps;


	cout << swaps << "\n";
}