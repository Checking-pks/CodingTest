#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, m;
    cin >> s >> m;

    int ari = 1023;

    if (s <= ari) {
        cout << "No thanks";
        return 0;
    }

    int need = s - ari;

    if ((m & need) == need)
        cout << "Thanks";
    else
        cout << "Impossible";

    return 0;
}