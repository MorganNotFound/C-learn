#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, num1, num2, num3;
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
	cout << num3 << " " << num2 << " " << num1;
	return 0;
}
