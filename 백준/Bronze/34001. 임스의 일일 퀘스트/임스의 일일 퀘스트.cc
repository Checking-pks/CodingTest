#include <iostream>
#include <vector>

using namespace std;

int L;

vector<int> w1 = {200, 210, 220, 225, 230, 235, 245, 250};
vector<int> w2 = {260, 265, 270, 275, 280, 285, 290, 295, 300};

void calc(int q)
{
    vector<int> w = (q == 6 ? w1 : w2);
    
    for (int i = 0; i < q; i++)
    {
        int count = (L < w[i] ? 0 : 500);
        
        count -= (L < w[i + 1] ? 0 : 200);
        count -= (L < w[i + 2] ? 0 : 200);
        
        cout << count << " ";
    }
    
    cout << "\n";
}

int main()
{
    cin >> L;
    
    calc(6);
    calc(7);
}