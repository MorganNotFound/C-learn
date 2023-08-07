#include <bits/stdc++.h>
using namespace std;
int main() {
	double a, b;
	cin >> a;
	if (a <= 3) {
		//TODO
		b = 10;
	}
	if (a > 3 && a <= 5) {
		b = 10 + (a - 3) * 1.8;
	}
	if (a > 5) {
		//TODO
		b = 13.6 + (a - 5) * 2.7;
	}
	cout << fixed << setprecision(2) << b * 1.00;
	return 0;
}
