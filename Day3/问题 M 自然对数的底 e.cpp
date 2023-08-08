#include <bits/stdc++.h>
using namespace std;
int jc(int n) {
	long x;
	x = 1;
	for (int i = 1; i <= n; i++) {
		x = x * i;
	}
	return x;
}
int main() {
	int n;
	long double m;
	double e = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		m = jc(i);
		e = e + 1 / m * 1.0000000000;
	}
	cout << fixed << setprecision(10) << e*1.0000000000;
	return 0;
}
