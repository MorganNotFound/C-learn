#include<bits/stdc++.h>
using namespace std;
int main(){
    float h,l,a;
    h = 6 * 9.6 - 5 * 9.4;
    l = 6 * 9.6 - 5 * 9.8;
    a = (6 * 9.6 - h - l)/(4*1.00);
	cout << fixed << setprecision(2) << a;
	return 0;
}

