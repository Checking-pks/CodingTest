#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> bowls;
    
    for (int i=0, num; i<3; i++) {
        cin >> num;
        bowls.push_back(num);
    }
    
    bowls.sort();
    bowls.pop_back();
    
    cout << bowls.back();
}