#include <iostream>

using namespace std;

int main() {
    long long height, width, range;
    cin >> height >> width >> range;
    
    cout << ((height / range) + (height % range != 0)) * ((width / range) + (width % range != 0));
}