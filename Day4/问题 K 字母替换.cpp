#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (islower(str[i])) {
			str[i] = 'z' - (str[i] - 'a');
		}
	}
	cout << str ;
	return 0;
}
