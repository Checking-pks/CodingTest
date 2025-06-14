#include <iostream>

using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    
    int couple = R * C / 2;
    
    cout << couple << " "
        << 2 * couple - 1;
}