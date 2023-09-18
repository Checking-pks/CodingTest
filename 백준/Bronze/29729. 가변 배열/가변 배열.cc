#include <iostream>
using namespace std;int main() {int s,a,r,t,p=0,n;cin>>s>>a>>r;a+=r;while(a--){cin>>n;p+=n?1:-1;s*=s<p?2:1;}cout<<s;}