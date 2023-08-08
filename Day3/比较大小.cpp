#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, t1, t2, t3;
	cin >> a >> b >> c;
	t3 = a > b ? a : b;
	t3 = t3 > c ? t3 : c;
	t1 = a < b ? a : b;
	t1 = t1 < c ? t1 : c;
	t2 = a + b + c - t1 - t3;
	cout << t1 << " " << t2 << " " << t3;
	return 0;
}
