#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int G, C, E;
        cin >> G >> C >> E;
        cout << max((E - C) * (2 * G - 1), 0) << "\n";
    }
}