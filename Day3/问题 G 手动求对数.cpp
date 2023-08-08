#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int k = 0;
	while (pow(3, k + 1) <= n) {
		k++;
	}
	cout <<  k;
	return 0;
}
