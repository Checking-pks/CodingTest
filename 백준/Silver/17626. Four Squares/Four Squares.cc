#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;
	cin >> num;
	
    vector<int> timesList(num + 1, num);

	timesList[0] = 0;
	
	for (int i=0; i<num; i++) {
		for (int j=1; i + j * j <= num; j++) {
			int nowTime = timesList[i] + 1;

			if (timesList[i + j * j] > nowTime) 
				timesList[i + j * j] = nowTime;
		}
	}

	cout << timesList.back();
	
    return 0;
}