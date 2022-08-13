#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t, num;
    string text;
    
    cin >> t;
    
    for (int i=0; i<t; i++) {
        cin >> num >> text;
        
        for (int j=0; j < text.length(); j++) {
            for (int k=0; k<num; k++) {
                cout << text[j];
            }
        }
        cout << "\n";
    }
}
