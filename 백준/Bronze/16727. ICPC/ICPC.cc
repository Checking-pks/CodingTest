#include <iostream>

using namespace std;

int main() {
    int p1, p2, s1, s2;
    cin >> p1 >> s1 >> s2 >> p2;
    
    if (p1 == s2 && p2 == s1)
        cout << "Penalty";
    else if (p1 + p2 != s1 + s2)
        cout << ((p1 + p2 > s1 + s2) ? "Persepolis" : "Esteghlal");
    else
        cout << ((p2 > s1) ? "Persepolis" : "Esteghlal");
}