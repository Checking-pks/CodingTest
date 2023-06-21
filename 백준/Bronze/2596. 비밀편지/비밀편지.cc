#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> codeList = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};

	int charNum;
	string code, result = "";
	cin >> charNum >> code;

	for (int i=0; i<charNum; i++) {
		string nowCode = code.substr(i*6, 6);

		int min = 7;

		for (int j=0; j<codeList.size(); j++) {
			int diffNum = 0;
			
			for (int k=0; k<6; k++) {
				diffNum += (codeList[j][k] != nowCode[k]);

				if (diffNum > 1) break;
			}

			if (min > diffNum)
				min = diffNum;

			if (min <= 1) {
				result += char('A' + j);
				break;
			}
		}

		if (min > 1) {
			result = to_string(i+1);
			break;
		}
	}

	cout << result;
}