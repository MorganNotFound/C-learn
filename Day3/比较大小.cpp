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
	/*
	int a, b, c; 
	cin >> a >> b >> c; 
	if (a < b) 
	{ 
		swap(a, b);
	}
	if (a < c) 
	{ 
		swap(a, c); 
	}
	if (b < c) 
	{ 
		swap(b, c); 
	}
	cout << a << " " << b << " " << c;
	*/
	return 0;
}
