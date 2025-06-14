#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int n;
        cin >> n;
        cout << ((n + 1) % (n % 100) == 0 ? "Good\n" : "Bye\n");
    }
}