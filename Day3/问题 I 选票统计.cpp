#include <bits/stdc++.h>
using namespace std;
int main() {
	char m;
	double n, i, a, b, c;
	cin >> n;
	i = 1;
	a = b = c = 0;
	do {
		cin >> m;
		if (m == 'a' || m == 'A') {
			//TODO
			a = a + 1;
		}
		if (m == 'b' || m == 'B') {
			//TODO
			b = b + 1;
		}
		if (m == 'c' || m == 'C') {
			//TODO
			c = c + 1;
		}
		i = i + 1;
	} while (i <= n);
	if (a >= b && b >= c) {
		//TODO
		cout << "a " << a << endl;
		cout << "b " << b << endl;
		cout << "c " << c;
	} else if (a >= c && c >= b) {
		//TODO
		cout << "a " << a << endl;
		cout << "c " << c << endl;
		cout << "b " << b;
	} else if (b >= a && a >= c) {
		//TODO
		cout << "b " << b << endl;
		cout << "a " << a << endl;
		cout << "c " << c;
	} else if (b >= c && c >= a) {
		//TODO
		cout << "b " << b << endl;
		cout << "c " << c << endl;
		cout << "a " << a;
	} else if (c >= a && a >= b) {
		//TODO
		cout << "c " << c << endl;
		cout << "a " << a << endl;
		cout << "b " << b;
	} else {
		//TODO
		cout << "c " << c << endl;
		cout << "b " << b << endl;
		cout << "a " << a;
	}
	return 0;
}
