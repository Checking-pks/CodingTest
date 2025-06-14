#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int q, result = 0;
    cin >> q;
    
    map<string, int> inCompany;
    for (int i = 0; i < q; i++)
    {
        string name, type;
        cin >> name >> type;
        
        if (type == "+")
            inCompany[name]++;
        else
        {
            if (inCompany[name])
                inCompany[name]--;
            else
                result++;
        }
    }
    
    for (auto people : inCompany)
        result += people.second;
    
    cout << result;
}