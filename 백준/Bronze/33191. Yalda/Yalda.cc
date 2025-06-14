#include <iostream>

using namespace std;

int main()
{
    int b, p1, p2, p3;
    cin >> b >> p1 >> p2 >> p3;
    
    if (b >= p1)
        cout << "Watermelon";
    else if (b >= p2)
        cout << "Pomegranates";
    else if (b >= p3)
        cout << "Nuts";
    else
        cout << "Nothing";
}