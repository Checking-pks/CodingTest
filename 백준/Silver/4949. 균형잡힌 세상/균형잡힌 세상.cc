#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string line;
    
    while(true) {
        getline(cin, line);

        if (line == ".")
            break;

        stack <char> bracketBucket;

        bool isPerfect = true;
        
        for (int i=0; i<line.length(); i++) {
            if (line[i] == '(' || line[i] == '[') {
                bracketBucket.push(line[i]);
                continue;
            }

            if (line[i] == ')') {
                if (bracketBucket.empty() || bracketBucket.top() != '(') {
                    isPerfect = false;
                    break;
                }

                bracketBucket.pop();
            }

            if (line[i] == ']') {
                if (bracketBucket.empty() || bracketBucket.top() != '[') {
                    isPerfect = false;
                    break;
                }
                    
                bracketBucket.pop();
            }
        }

        cout << ((isPerfect && bracketBucket.empty()) ? "yes" : "no") << "\n";
    }
    
    return 0;
}