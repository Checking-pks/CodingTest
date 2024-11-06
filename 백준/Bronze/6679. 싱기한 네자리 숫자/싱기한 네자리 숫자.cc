#include <iostream>

using namespace std;

int getSum(int n, int d)
{
    int result = 0;
    while (n)
    {
        result += n % d;
        n /= d;
    }
    return result;
}

bool check(int n)
{
    int r1 = getSum(n, 10);
    int r2 = getSum(n, 12);
    int r3 = getSum(n, 16);
    
    return (r1 == r2 && r2 == r3);
}

int main()
{
    for (int i=1000; i<=9999; i++)
        if (check(i))
            cout << i << "\n";
}