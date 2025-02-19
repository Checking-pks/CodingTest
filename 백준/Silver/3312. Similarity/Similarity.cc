#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    string pattern, text;
    cin >> pattern >> text;
    
    vector<ll> alphabet(26);
    ll result = 0, lanP = pattern.length(), lanT = text.length();
    
    text.push_back('z');
    
    for (ll i = 0; i <= lanT - lanP; i++)
        alphabet[text[i] - 'a']++;
    
    for (ll i = 0; i < lanP; i++)
    {
        result += alphabet[pattern[i] - 'a'];
        alphabet[text[i] - 'a']--;
        alphabet[text[lanT - lanP + i + 1] - 'a']++;
    }
    
    cout << result;
}