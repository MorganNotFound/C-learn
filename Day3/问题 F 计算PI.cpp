#include <bits/stdc++.h>
using namespace std;
int main() {
	int k = 1000;
	double pi;
	pi = 0;
	for (double i = 0; i <= k; i = i + 1) {
		pi = pi + (pow(-1, i)) * (1 / (2 * i + 1));
	}
	cout << fixed << setprecision(4) << 4 * pi;
	return 0;
}
