#include <bits/stdc++.h>
using namespace std;
int main() {
	double a, b, c, num1, num2, num3, p, h, s;
	cin >> a >> b >> c;
	if (a < b) {
		//TODO
		if (b < c) {
			//TODO
			num2 = b;
			num3 = c;
			num1 = a;
		} else {
			//TODO
			if (a < c) {
				//TODO
				num1 = a;
				num2 = c;
				num3 = b;
			} else {
				//TODO
				num1 = c;
				num2 = a;
				num3 = b;
			}
		}
	} else {
		//TODO
		if (b < c) {
			//TODO
			if (a < c) {
				//TODO
				num1 = b;
				num2 = a;
				num3 = c;
			} else {
				//TODO
				num1 = b;
				num2 = c;
				num3 = a;
			}
		} else {
			//TODO
			num1 = c;
			num2 = b;
			num3 = a;
		}
	}
	if (num1 + num2 <= num3) {
		//TODO
		cout << "Data Error！";
	} else {
		//TODO
		p = (a + b + c) / 2;
		h = p * (p - a) * (p - b) * (p - c);
		s = pow(h, 0.5) * 1.00;
		cout << fixed << setprecision(2) << s * 1.00;
	}
	return 0;
}
