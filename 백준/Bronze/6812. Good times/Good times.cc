#include <iostream>

using namespace std;

int main() {
	int time;
	cin >> time;

	cout << time << " in Ottawa\n"
		<< (time + 2100) % 2400 << " in Victoria\n"
		<< (time + 2200) % 2400 << " in Edmonton\n"
		<< (time + 2300) % 2400 << " in Winnipeg\n"
		<< time 				<< " in Toronto\n"
		<< (time + 100) % 2400	<< " in Halifax\n";

	time += 130;

	if (time % 100 >= 60)
	{
		time += 40;
	}

	cout << time % 2400 << " in St. John's\n";
}