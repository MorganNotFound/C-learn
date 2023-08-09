#include<bits/stdc++.h>
using namespace std;
void factorize(int n) {
	for (int i = 2; i <= n; i++) {
		while (n % i == 0) {
			cout << i;
			n /= i;
			if (n != 1) {
				cout << "*";
			}
		}
	}
}
int main() {
	int num;
	cin >> num;
	factorize(num);
	return 0;
}
