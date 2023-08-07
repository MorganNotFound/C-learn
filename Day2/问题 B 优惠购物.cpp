#include<bits/stdc++.h>
using namespace std;
int main() {
	double a;
	cin >> a;
	if(a<=1000){
		//TODO
		a=0.95*a;
	}else{
		//TODO
		a=(a-1000)*0.9+950;
	}
	cout << a;
	return 0;
}
