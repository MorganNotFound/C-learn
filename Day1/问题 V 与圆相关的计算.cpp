#include<bits/stdc++.h>
using namespace std;
int main(){
    float r,d,c,s,pi;
    pi = 3.14159;
    cin >> r;
    d = 2*r;
    c = 2*pi*r;
    s = pi*r*r;
    cout <<fixed<<setprecision(4)<<d<<" "<<c<<" "<<s;
    return 0;
}

