#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) {
        string name, type;
        int age, weight;
        
        cin >> name >> age >> weight;
        
        if (age + weight == 0)
            break;
        
        if (age >= 18 || weight >= 80) 
            type = "Senior";
        else
            type = "Junior";
        
        cout << name << " " << type << "\n";
   }
    
    return 0;
}