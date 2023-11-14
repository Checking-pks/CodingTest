#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    if (myString.length() < pat.length()) return 0;
    
    for (int i=0; i<myString.length(); i++) myString[i] = toupper(myString[i]);
    for (int i=0; i<pat.length(); i++)      pat[i]      = toupper(pat[i]);
    
    for (int i=0; i<=myString.length()-pat.length(); i++) 
        if (myString.substr(i, pat.length()) == pat) 
            return 1;
    
    return 0;
}