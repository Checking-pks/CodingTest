#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    
    int v1=100-n1, v2=100-n2;    
    cout << v1 << " " << v2 << " " << 100-(v1+v2) << " " 
        << v1*v2 << " " << v1*v2/100 << " " << v1*v2%100 << "\n";
    cout << 100-(v1+v2) + v1*v2/100 << " " << v1*v2%100;
}