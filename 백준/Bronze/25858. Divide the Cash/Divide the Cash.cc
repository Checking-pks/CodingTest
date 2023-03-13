#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, price, total = 0;
    vector<int> right;
    cin >> n >> price;
    
    for (int i=0, num; i<n; i++) {
        cin >> num;
        
        right.push_back(num);
        total += num;
    }
    
    price /= total;
    
    for (int r:right)
        cout << r * price << "\n";
}