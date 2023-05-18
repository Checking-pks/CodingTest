#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int num;
	cin >> num;

	vector<int> numList(num, 0);
	vector<vector<bool>> questionList(num, vector<bool> (num, false));

	for (int i=0; i<num; i++)
		cin >> numList[i];

	for (int i=0; i<num; i++) {
		for (int j=num-1; j>=i; j--) {
			if (questionList[i][j]) continue;
			
			int length = (j - i) >> 1;
	
			bool isPalindrome = true;
	
			for (int k=0; k<=length; k++) {
				if (numList[i + k] != numList[j - k]) {
					isPalindrome = false;
					break;
				}
			}

			if (isPalindrome) {
				questionList[i][j] = true;

				for (int k=0; i+k<=j-k; k++)
					questionList[i+k][j-k] = true;
			}
		}
	}

	int question;
	cin >> question;

	for (int i=0, start, end; i<question; i++) {
		cin >> start >> end;

		cout << questionList[--start][--end] << "\n";
	}
}