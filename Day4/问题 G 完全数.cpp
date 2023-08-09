#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, d, e, m;
	cin >> a >> b >> c >> d >> e;
	m = 0;
	for (int i = 1; i <= a; ++i) {
		if (a % i == 0) {
			m = m + i;
		}
	}
	if (m == 2 * a) {
		//TODO
		a = 1;
	} else {
		//TODO
		a = 0;
	}
	m = 0;
	for (int i = 1; i <= b; ++i) {
		if (b % i == 0) {
			m = m + i;
		}
	}
	if (m == 2 * b) {
		//TODO
		b = 1;
	} else {
		//TODO
		b = 0;
	}
	m = 0;
	for (int i = 1; i <= c; ++i) {
		if (c % i == 0) {
			m = m + i;
		}
	}
	if (m == 2 * c) {
		//TODO
		c = 1;
	} else {
		//TODO
		c = 0;
	}
	m = 0;
	for (int i = 1; i <= d; ++i) {
		if (d % i == 0) {
			m = m + i;
		}
	}
	if (m == 2 * d) {
		//TODO
		d = 1;
	} else {
		//TODO
		d = 0;
	}
	m = 0;
	for (int i = 1; i <= e; ++i) {
		if (e % i == 0) {
			m = m + i;
		}
	}
	if (m == 2 * e) {
		//TODO
		e = 1;
	} else {
		//TODO
		e = 0;
	}
	cout << a << " " << b << " " << c << " " << d << " " << e;
	return 0;
}
