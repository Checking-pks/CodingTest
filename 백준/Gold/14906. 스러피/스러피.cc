#include <iostream>

using namespace std;

bool isSlump(string s) {
    if (s[0] != 'D' && s[0] != 'E')
        return false;
    
    if (s[1] != 'F')
        return false;
        
    for (int i=1; i<s.length() - 1; i++) {
        switch (s[i]) {
            case 'D':
            case 'E':
                return isSlump(s.substr(i));
            case 'F':
                break;
            default:
                return false;
        }
    }
    
    return s.back() == 'G';
}

bool isSlimp(string s) {
    if (s[0] != 'A')
        return false;
    
    if (s.length() <= 2)
        return s == "AH";
        
    if (s[1] == 'B')
        return isSlimp(s.substr(2, s.length() - 3));
    else
        return isSlump(s.substr(1, s.length() - 2));
}

bool isSlurpy(string s) {
    int pos = 0;
    
    while (s.find('C', pos) != string::npos)
        pos = s.find('C', pos) + 1;
        
    while (s.find('H', pos) != string::npos)
        pos = s.find('H', pos) + 1;
        
    return isSlimp(s.substr(0, pos)) && isSlump(s.substr(pos));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N;
    cin >> N;
    
    cout << "SLURPYS OUTPUT\n";
    
    while (N--) {
        string s;
        cin >> s;
        cout << (isSlurpy(s) ? "YES\n" : "NO\n");
    }
    
    cout << "END OF OUTPUT";
}