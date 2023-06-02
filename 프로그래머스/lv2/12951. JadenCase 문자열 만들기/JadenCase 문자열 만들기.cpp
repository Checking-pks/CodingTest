#include <string>
#include <vector>

using namespace std;

bool isLower(char c) {
    return 'a' <= c && c <= 'z';
}

bool isUpper(char c) {
    return 'A' <= c && c <= 'Z';
}

string solution(string s) {
    int asciiDistance = 'A' - 'a';
    string answer = "";
    
    if (isLower(s[0])) s[0] += asciiDistance;
    
    for (int i=1; i<s.length(); i++) {
        if (s[i-1] == ' ' && isLower(s[i]))
            s[i] += asciiDistance;
        
        if (s[i-1] != ' ' && isUpper(s[i]))
            s[i] -= asciiDistance;
    }
    
    return s;
}