#include <bits/stdc++.h>
using namespace std;
int main() {
	char x, y, m;
	int a;
	m = 'A';
	x = ' ';
	cin >> y;
	a = y - 65 + 1;
	for (int i = 1; i <= a; i++) {
		//TODO
		for (int j = a - i; j >= 1; j--) {
			//TODO
			cout << x;
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			//TODO
			cout << m;
		}
		m = m + 1;
		cout << endl;
	}
	m = m - 2;
	for (int i = a - 1; i >= 1; i--) {
		//TODO
		for (int j = 1; j <= a - i; j++) {
			//TODO
			cout << x;
		}
		for (int k = 2 * i - 1; k >= 1; k--) {
			//TODO
			cout << m;
		}
		m = m - 1;
		cout << endl;
	}
	return 0;
}
