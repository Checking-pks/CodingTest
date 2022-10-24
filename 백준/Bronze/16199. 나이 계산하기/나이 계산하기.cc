#include <iostream>

using namespace std;

int main() {
    int birth_y, birth_m, birth_d;
    int now_y, now_m, now_d;
    
    cin >> birth_y >> birth_m >> birth_d;
    cin >> now_y >> now_m >> now_d;
    
    cout << now_y - birth_y - ((now_m < birth_m) || (now_m == birth_m && now_d < birth_d)) << "\n";
    cout << now_y - birth_y + 1 << "\n";
    cout << now_y - birth_y;
}