#include<iostream>
using namespace std;int main(){cout<<fixed,cout.precision(9);double i=1,m,a=1,b,c,r=0;cin>>m>>b>>c;b/=100,c/=100;for(;b<1;i++){r+=a*b*m*i;a*=1-b;b*=1+c;}r+=a*m*i;cout<<r;}