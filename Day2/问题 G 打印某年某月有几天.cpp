#include <bits/stdc++.h>
using namespace std;
int main() {
	int y, m;
	cin >> y >> m;
	if (m == 2) {
		//TODO
		if (y % 100 == 0) {
			//TODO
			cout << 28;
		} else {
			//TODO
			if (y % 4 == 0) {
				//TODO
				cout << 29;
			} else {
				cout << 28;
			}
		}
	} else {
		//TODO
		if (m <= 7) {
			//TODO
			if (m % 2 == 1) {
				//TODO
				cout << 31;
			} else {
				//TODO
				cout << 30;
			}
		} else {
			//TODO
			if (m % 2 == 0) {
				//TODO
				cout << 31;
			} else {
				//TODO
				cout << 30;
			}
		}
	}
	return 0;
}
