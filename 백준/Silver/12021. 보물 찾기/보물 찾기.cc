#include <iostream>
#include <vector>

using namespace std;

pair<double, double> pos;

void newPos() {
    pair<double, double> next;
    next.first = (pos.first + pos.second) / 2;
    next.second = 2 * pos.first * pos.second / (pos.first + pos.second);
    
    if (pos == next)
        return;
        
    pos = next;
    newPos();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cout.precision(6);
    cout << fixed;
    
    cin >> pos.first >> pos.second;
    
    newPos();
    
    cout << pos.first << " " << pos.second;
}