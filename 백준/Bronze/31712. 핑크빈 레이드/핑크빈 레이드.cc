#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<pair<int, int>> player(3);
    for (int i=0; i<3; i++)
        cin >> player[i].first >> player[i].second;
    
    int hp;
    cin >> hp;
    
    for (int i=0; i<=1666000; i++) {
        for (int j=0; j<3; j++) 
            if (i % player[j].first == 0)
                hp -= player[j].second;
        
        if (hp <= 0) {
            cout << i;
            break;
        }
    }
}