#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int year, num;
    char alpha;
    cin >> year;
    
    year += 56;
    
    alpha = year%12 + 'A';
    num = year%10;
    
    cout << alpha << num;
    
}
