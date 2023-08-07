#include <bits/stdc++.h>
using namespace std;
int main() {
	double a, b, t;
	char x;
	cin >> a >> b >> x;
	t = int(x);
	if (t == '+') {
		//TODO
		cout << fixed << setprecision(2) << 1.00 * a + b;
	}
	if (t == '-') {
		//TODO
		cout << fixed << setprecision(2) << 1.00 * a - b;
	}
	if (t == '*') {
		//TODO
		cout << fixed << setprecision(2) << 1.00 * a * b;
	}
	if (t == '/') {
		//TODO
		cout << fixed << setprecision(2) << 1.00 * a / b;
	}
	return 0;
}
