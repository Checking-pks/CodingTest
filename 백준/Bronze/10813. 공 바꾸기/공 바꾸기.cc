#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> balls;
    
    for (int i=1; i<=n; i++)
        balls.push_back(i);
    
    while (m--) {
        int p1, p2;
        cin >> p1 >> p2;
        
        int tmp = balls[p1 - 1];
        balls[p1 - 1] = balls[p2 - 1];
        balls[p2 - 1] = tmp;
    }
    
    for (int i:balls)
        cout << i << " ";
}