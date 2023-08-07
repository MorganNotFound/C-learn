#include<bits/stdc++.h>
using namespace std;
int main(){
int age,hrt;
cin>>age;
cin>>hrt;
cout<<fixed<<setprecision(1)<<(220-age-hrt)*0.6+hrt<<"~"<<(220-age-hrt)*0.8+hrt;
return 0;
}

