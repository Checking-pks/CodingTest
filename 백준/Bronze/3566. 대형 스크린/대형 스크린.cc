#include <iostream>

using namespace std;

int getDivMax(int a, int b, int c, int d)
{
    return max((a + b - 1) / b, (c + d - 1) / d);
}

int main()
{
    int rh, rv, sh, sv;
    cin >> rh >> rv >> sh >> sv;
    
    int count, result = -1;
    cin >> count;
    
    for (int i = 0, rhi, rvi, shi, svi, pi; i < count; i++)
    {
        cin >> rhi >> rvi >> shi >> svi >> pi;
        
        int h1 = getDivMax(rh, rhi, sh, shi);
        int v1 = getDivMax(rv, rvi, sv, svi);
        
        int h2 = getDivMax(rh, rvi, sh, svi);
        int v2 = getDivMax(rv, rhi, sv, shi);
        
        int price = min(h1 * v1, h2 * v2) * pi;
        
        if (result == -1)
            result = price;
        
        result = min(result, price);
    }
    
    cout << result;
}