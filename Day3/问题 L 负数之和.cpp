#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, s;
	s = 0;
	do {
		cin >> n;
		if (n < 0) {
			//TODO
			s = s + n;
		}
	} while (n != 0);
	cout << s;
	return 0;
}
