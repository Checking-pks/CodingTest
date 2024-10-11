#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    
    pair<int, int> p1, p2;
    
    if ((A > 0) == (B > 0)) {
        p1 = {min(x1, x2), min(y1, y2)};
        p2 = {max(x1, x2), max(y1, y2)};
    } else {
        p1 = {max(x1, x2), min(y1, y2)};
        p2 = {min(x1, x2), max(y1, y2)};
    }
        
    int v1 = A * p1.first + B * p1.second + C;
    int v2 = A * p2.first + B * p2.second + C;
    
    if (v1 == 0 || v2 == 0)
        cout << "Lucky";
    else
        cout << ((v1 > 0) == (v2 > 0) ? "Lucky" : "Poor");
}