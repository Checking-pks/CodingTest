#include<iostream>
int main(){int a,b,c,d,e;std::cin>>a>>b>>c>>d>>e;std::cout<<std::min(a*e,b+(e>c)*(e-c)*d);}