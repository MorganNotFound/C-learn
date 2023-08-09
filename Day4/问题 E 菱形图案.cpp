#include <bits/stdc++.h>
using namespace std;
int main() {
	char x;
	int a;
	x = ' ';
	cin >> a;
	for (int i = 1; i <= a; i++) {
		//TODO
		for (int j = a - i; j >= 1; j--) {
			//TODO
			cout << x;
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			//TODO
			cout << "*";
		}
		cout << endl;
	}
	for (int i = a - 1; i >= 1; i--) {
		//TODO
		for (int j = 1; j <= a - i; j++) {
			//TODO
			cout << x;
		}
		for (int k = 2 * i - 1; k >= 1; k--) {
			//TODO
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
