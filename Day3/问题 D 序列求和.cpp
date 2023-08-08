#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	double a, i;
	cin >> n;
	a = 0;
	i = 1;
	do {
		a = a + 1 / i;
		i = i + 1;
	} while (i <= n);
	cout << fixed << setprecision(6) << a * 1.000000;
	return 0;
}
