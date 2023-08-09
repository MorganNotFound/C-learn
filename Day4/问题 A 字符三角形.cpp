#include <bits/stdc++.h>
using namespace std;
int main() {
	int i, j, n;
	char x;
	cin >> n >> x;
	i = 1;
	while (i <= n) {
		j = 1;
		while (j <= i) {
			cout << x ;
			j++;
		}
		cout << " ";
		i++;
	}
	return 0;
}
