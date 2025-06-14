#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    bool isFind = false;
    
    for (int i=0; i<num; i++) {
        string name;
        cin >> name;
        
        if (name == "anj") {
            isFind = true;
        }
    }
    
    cout << (isFind ? "뭐야;" : "뭐야?");
}