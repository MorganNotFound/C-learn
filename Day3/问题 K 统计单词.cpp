#include <bits/stdc++.h>
using namespace std;
int main() {
	char ch;
	cin >> ch;
	int count = 0;
	int word = 0;
	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			word = 0;
		} else if (word == 0) {
			word = 1;
			count++;
		}
	}
	cout << count;
	return 0;
}
