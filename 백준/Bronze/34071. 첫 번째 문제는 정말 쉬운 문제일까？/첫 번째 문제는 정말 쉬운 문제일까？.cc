#include <iostream>

using namespace std;

int main()
{
    int N, target;
    cin >> N >> target;
    
    bool isEz = true, isHard = true;
    for (int i = 1, now; i < N; i++)
    {
        cin >> now;
        if (now > target) isHard = false;
        if (now < target) isEz = false;
    }
    
    if (isEz) cout << "ez";
    else if (isHard) cout << "hard";
    else cout << "?";
}