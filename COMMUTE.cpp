#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int time = 0;
		for (int i = 0; i < n; i++) {
			int x, l, f;
			cin >> x >> l >> f;
			if (i == 0) {
				time = x + l;
			} else {
				if (time <= x) {
					time = x + l;
				} else {
					while (time > x) {
						x += f;
					}
					time = x + l;
				}
			}
		}
		cout << time << '\n';
	}
	return 0;
}
