#include <iostream>
#include <vector>

using namespace std;

int main(){
	int sum=0;
	bool isHacked=false;
	vector<int> score = {100, 100, 200, 200, 300, 300, 400, 400, 500};
	
	for (int i=0, now; i<9; i++) {
		cin >> now;
		sum += now;
		if (now > score[i]) isHacked = true;
	}

	if (isHacked) cout << "hacker";
	else if (sum >= 100) cout << "draw";
	else cout << "none";
}