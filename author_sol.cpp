#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	int positive = 0;
	int negative = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			positive++;
		} else {
			negative++;
		}
	}
	//If the length of the given segment is even and count of 1 in input is not 
	//lower then half of the length of the segment and count of -1 in the input is 
	//not lower then half of the length of the segment so we have answer 1, otherwise 0.
	for (int i = 0; i < m; i++) {
		int from, to;
		cin >> from >> to;
		int segment = (to - from) + 1;
		if (segment % 2 == 0) {
			// the number of 1's and -1's should be able to accommodate
			// exactly both of the half of the segment in order for the sum to be zero.
			if (positive >= segment / 2 && negative >= segment / 2) {
				cout << 1;
			} else {
				cout << 0;
			}
		} else {
			cout << 0;
		}
		cout << '\n';
	}
	return 0;
}
