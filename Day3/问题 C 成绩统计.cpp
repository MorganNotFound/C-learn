#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, i, a, l1, l2, l3, l4, l5, l6;
	cin >> n;
	i = 1;
	l1 = l2 = l3 = l4 = l5 = l6 = 0;
	do {
		//TODO
		cin >> a;
		if (a == 100) {
			//TODO
			l1 = l1 + 1;
		} else if (a >= 90 && a <= 99) {
			//TODO
			l2 = l2 + 1;
		} else if (a >= 80 && a <= 89) {
			//TODO
			l3 = l3 + 1;
		} else if (a >= 70 && a <= 79) {
			//TODO
			l4 = l4 + 1;
		} else if (a >= 60 && a <= 69) {
			//TODO
			l5 = l5 + 1;
		} else {
			//TODO
			l6 = l6 + 1;
		}
		i++;
	} while (i <= n);
	cout << l1 << endl;
	cout << l2 << endl;
	cout << l3 << endl;
	cout << l4 << endl;
	cout << l5 << endl;
	cout << l6;
	return 0;
}
