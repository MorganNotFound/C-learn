#include <bits/stdc++.h>
using namespace std;
int main() {
	int N, c;
	cin >> N;
	if (N > 0 && N <= 6) {
		//TODO
		c = 3;
	}
	if (N > 6 && N <= 16) {
		//TODO
		c = 4;
	}
	if (N > 16 && N <= 26) {
		//TODO
		c = 5;
	}
	if (N > 26 && N <= 36) {
		//TODO
		c = 6;
	}
	cout << c;
	return 0;
}
