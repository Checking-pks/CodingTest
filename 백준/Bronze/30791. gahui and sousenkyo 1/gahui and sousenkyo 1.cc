#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int result = 0;
    vector<int> nList(5);
    for (int i = 0; i < 5; i++)
        cin >> nList[i];
    
    sort(nList.begin(), nList.end());
    
    for (int i = 0; i < 4; i++)
        if (nList[4] - 1000 <= nList[i])
            result++;
    
    cout << result;
}