#include <iostream>
#include <string>
using namespace std;


int main() {
    
    int testcase;
    cin >> testcase;
    cin.ignore(256,'\n');
    
    for (int i=0; i<testcase; i++) {
        string text = "", w = "";
        
        getline(cin, text);
        
        for(int j=0; j<text.length(); j++) {
            if (text[j] == ' ') {
                cout << w << " ";
                w = "";
            } else {
                w = text[j] + w;
            }
        }
        
        cout << w << "\n";
        
    }
}
