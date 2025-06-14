#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void sorting(string &s)
{
    if (s.length() < 3) return;
    sort(s.begin() + 1, s.end() - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, M;
    unordered_map<string, string> dictionary;
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string input, sorted;
        cin >> input;
        
        sorted = input;
        sorting(sorted);
        
        dictionary[sorted] = input;
    }
    
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        string input;
        cin >> input;
        
        sorting(input);
        
        cout << dictionary[input] << " ";
    }
}