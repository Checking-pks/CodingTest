#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    std::cout << "UOS"[--x % 3];
}