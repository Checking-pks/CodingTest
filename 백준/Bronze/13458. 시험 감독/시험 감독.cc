#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, b, c;
	long long result = 0;
    vector<int> rooms;
    
    cin >> n;
    
    for (int i=0, a; i<n; i++) {
        cin >> a;
        rooms.push_back(a);
    }
    
    cin >> b >> c;
    
    for (int r:rooms) 
        if (r - b > 0)
            result += ceil(1.0 * (r - b) / c);
    
    cout << result + rooms.size();
}