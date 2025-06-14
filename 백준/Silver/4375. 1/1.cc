#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> cache;

int calculate(int num)
{
    int result = 1, onlyOne = 1;
    while (true)
    {
        if (onlyOne % num == 0)
            break;
        
        onlyOne %= num;
        onlyOne *= 10;
        onlyOne++;
        result++;
    }
    
    return result;
}

void init()
{
    for (int i = 1; i <= 9999; i++)
    {
        if (i % 2 == 0 || i % 5 == 0)
            continue;
        
        cache[i] = calculate(i);
    }
}

int main() {
    init();
    
    int n;
    while (cin >> n)
        cout << cache[n] << "\n";
}