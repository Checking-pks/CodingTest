#include <iostream>

using namespace std;

int main() {
    string src;
    getline(cin, src);

    if (src == "1 2 3 4 5 6 7 8")
        cout << "ascending";
    else if (src == "8 7 6 5 4 3 2 1")
        cout << "descending";
    else
        cout << "mixed";
    
    return 0;
}