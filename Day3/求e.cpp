#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	double e = 1.0;
	double f = 1.0;
	for (int i = 1; i <= n; i++) {
		f *= i;
		e += 1.0 / f;
	}
	cout << fixed << setprecision(10) << e ;
	return 0;
}
