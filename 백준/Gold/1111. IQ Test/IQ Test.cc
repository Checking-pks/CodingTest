#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> nList;

string simulate()
{
    if (N == 1) return "A";
    
    pair<int, int> result = {-101, -101};
    for (int a = -200, b; a < 200; a++)
    {
        bool isCorrect = true;
        
        b = nList[1] - nList[0] * a;
        
        for (int i = 1; i < N - 1; i++)
        {
            if (nList[i] * a + b != nList[i + 1])
            {
                isCorrect = false;
                break;
            }
        }
        
        if (isCorrect)
        {
            if (result.first != -101)
                if (nList.back() * a + b != nList.back() * result.first + result.second)
                    return "A";
            
            result = {a, b};
        }
    }
    
    return (result.first == -101 ? "B" : to_string(nList.back() * result.first + result.second));
}

int main()
{
    cin >> N;
    
    nList.resize(N);
    for (int i = 0; i < N; i++)
        cin >> nList[i];
    
    cout << simulate();
}