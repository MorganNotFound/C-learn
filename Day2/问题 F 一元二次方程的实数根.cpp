#include<bits/stdc++.h>
using namespace std;
int main() {
	double a, b, c, d;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d > 0) {
		//TODO
		cout << fixed << setprecision(2) << 1.00 * (-b + sqrt(d)) / 2 / a << endl;
		cout << fixed << setprecision(2) << 1.00 * (-b - sqrt(d)) / 2 / a;
	} else if (d == 0) {
		//TODO
		cout << fixed << setprecision(2) << 1.00 * (-b / 2 / a);
	} else {
		//TODO
		cout << "No answer£¡";
	}
	return 0;
}
