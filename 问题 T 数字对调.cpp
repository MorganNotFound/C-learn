#include<bits/stdc++.h>
using namespace std;
int main(){
    double h,w,BMI;
    cin >> h;
    cin >> w;
    BMI = w / (h * h);
    cout << fixed << setprecision(2) << BMI;
    return 0;
}

