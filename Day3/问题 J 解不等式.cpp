#include <bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cin >> x;
	int n = 0;
	int sum = 0;
	while (sum <= x) {
		n++;
		sum += n * n;
	}
	cout << n - 1 ;
	return 0;
}
