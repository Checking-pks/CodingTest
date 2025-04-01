#include <iostream>
#include <vector>

using namespace std;

void simulate()
{
    vector<int> alphabet(26);
    
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++)
        alphabet[s[i] - 'A']++;
    
    int W;
    cin >> W;
    for (int i = 0; i < W; i++)
    {
        bool isCorrect = true;
        
        cin >> s;
        
        vector<int> now(26);
        for (int j = 0; j < s.length(); j++)
            now[s[j] - 'A']++;
        
        for (int j = 0; j < 26; j++)
        {
            if (alphabet[j] < now[j])
            {
                isCorrect = false;
                break;
            }
        }
        
        cout << (isCorrect ? "YES\n" : "NO\n");
    }
}

int main() {
    
    int T;
    cin >> T;
    
    while (T--)
        simulate();
}