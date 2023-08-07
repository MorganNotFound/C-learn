#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,p,h,s;
    cin >> a >> b >> c;
    p=(a+b+c)/2;
    h=p*(p-a)*(p-b)*(p-c);
    s=pow(h,0.5)*1.000;
    cout << fixed << setprecision(3) << s*1.000;
    return 0;
}

