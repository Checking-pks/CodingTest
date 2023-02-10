#include <iostream>

using namespace std;

int main() {
	int todayTemperature, todayWindSpeed;
	int tomorrowTemperature, tomorrowWindSpeed;

	cin >> todayTemperature >> todayWindSpeed;
	cin >> tomorrowTemperature >> tomorrowWindSpeed;

	if (tomorrowTemperature < 0 && tomorrowWindSpeed >= 10)
		cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
	else if (todayTemperature > tomorrowTemperature)
		cout << "MCHS warns! Low temperature is expected tomorrow.";
	else if (todayWindSpeed < tomorrowWindSpeed)
		cout << "MCHS warns! Strong wind is expected tomorrow.";
	else
		cout << "No message";
}