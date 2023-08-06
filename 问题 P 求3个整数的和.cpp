#include<bits/stdc++.h>
using namespace std;
int main(){
    double n, m;
    cin >> n;
    cin >> m;

    double discounted_price = m * 0.8;
    double remaining_money = n - discounted_price;

    cout << fixed << setprecision(2) << remaining_money;
return 0;
}

