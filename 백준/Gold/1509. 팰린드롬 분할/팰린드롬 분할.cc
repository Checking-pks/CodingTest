#include <iostream>
#include <vector>

using namespace std;

string S;
int len;
vector<vector<bool>> isPal;

void init()
{
    cin >> S;
    
    len = S.length();
    isPal.resize(len, vector<bool>(len));
}

void calc()
{
    for (int i = 1; i <= len; i++)
    {
        for (int s = 0, e; s + i <= len; s++)
        {
            e = s + i - 1;
            
            if (S[s] == S[e]) 
                isPal[s][e] = (i < 3 ? true : isPal[s + 1][e - 1]);
        }
    }
}

void result()
{
    vector<int> nList(len, 1);
    for (int i = 1; i < len; i++)
    {
        nList[i] = nList[i - 1] + 1;
        
        for (int j = 0; j < i; j++)
        {
            if (!isPal[j][i]) continue;
            nList[i] = min(nList[i], nList[j - 1] + 1);
        }
    }
    
    cout << nList.back();
}

int main()
{
    init();
    calc();
    result();
}