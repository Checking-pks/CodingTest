#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, isFind = 0;
    cin >> N;
    
    string hello = "12334", world = "54637";
    string nList = "0001234567";
    
    do
    {
        if (nList[0] == '1' || nList[0] == '5') continue;
        
        string a = hello, b = world;
        
        for (int i = 0; i < 10; i++)
        {
            if (nList[i] == '0') continue;
            
            for (int j = 0; j < 5; j++)
            {
                if (nList[i] == hello[j]) a[j] = ('0' + i);
                if (nList[i] == world[j]) b[j] = ('0' + i);
            }
        }
        
        if (stoi(a) + stoi(b) == N)
        {
            hello = a;
            world = b;
            isFind = 1;
            break;
        }
    } while (next_permutation(nList.begin(), nList.end()));
    
    if (isFind)
    {
        cout << "  " << hello << "\n"
            << "+ " << world << "\n"
            << "-------\n"
            << (N > 99999 ? " " : "  ") << N;
    }
    else
        cout << "No Answer";
}