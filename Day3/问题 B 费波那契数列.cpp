#include <bits/stdc++.h>
using namespace std;
void printFibonacciSequence(int n) {
	int a = 1, b = 1;
	int count = 2;
	cout << "1 1 ";
	while (count < n) {
		int c = a + b;
		cout << c << " ";
		count++;

		if (count % 5 == 0) {
			cout << endl;
		}

		a = b;
		b = c;
	}

	cout << endl;
}
int main() {
	int n;
	cin >> n;
	printFibonacciSequence(n);
	return 0;
}
