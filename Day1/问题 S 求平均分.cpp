#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int g = num / 100;
    int s = (num / 10) % 10;
    int b = num % 10;
    int newNum = b * 100 + s * 10 + g;
    cout << newNum;
    return 0;
}

