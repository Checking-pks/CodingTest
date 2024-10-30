#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> sList;

bool cmp(string a, string b)
{
    if (a.length() != b.length())
        return a.length() < b.length();
    return a < b;
}

void recursion(string now)
{
    sList.push_back(now);
    
    for (char i = '0'; i <= '9'; i++)
        if (now.back() > i)
            recursion(now + i);
}

void init()
{
    for (char i = '0'; i <= '9'; i++)
        recursion(string(1, i));
    
    sort(sList.begin(), sList.end(), cmp);
}

int main()
{
    init();
    
    int N;
    cin >> N;
    cout << (N > sList.size() ? "-1" : sList[N - 1]);
}