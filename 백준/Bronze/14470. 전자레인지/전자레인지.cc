#include <iostream>

using namespace std;

int main() {
    int defaultTemperature, goalTemperature;
    int frozen, defrost, heat;
    int result = 0;
    
    cin >> defaultTemperature >> goalTemperature;
    cin >> frozen >> defrost >> heat;
    
    result += (defaultTemperature < 0) ? -defaultTemperature * frozen : 0;
    result += (defaultTemperature <= 0) ? defrost : 0;
	result += (defaultTemperature > 0) ? (goalTemperature - defaultTemperature) * heat : goalTemperature * heat;
    
    cout << result;
}