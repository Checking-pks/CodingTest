#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) {
        string line;

        getline(cin, line);

        if (line.empty())
            break;
    
        cout << line << "\n";
    }
    
    return 0;
}