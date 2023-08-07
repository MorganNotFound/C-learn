#include<bits/stdc++.h>
using namespace std;
int main() {
	int x,a,y,b,r;
	cin >> x >> a >> y >> b;
	r = (a*x-b*y)/(a-b);
	cout << fixed << setprecision(2) << r*1.00;
    return 0;
}
