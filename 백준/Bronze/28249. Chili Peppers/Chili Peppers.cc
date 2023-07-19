#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    unordered_map<string, int> pepperList = {{"Poblano", 1500}, {"Mirasol", 6000}, {"Serrano", 15500}, {"Cayenne", 40000}, {"Thai", 75000}, {"Habanero", 125000}};
    long long result = 0;
    
    for (string pepper; num--;) {
        cin >> pepper;
        result += pepperList[pepper];
    }
    
    cout << result;
}