#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int result=1001;
		string varStr, conStr;
		cin >> varStr >> conStr;

		unordered_map<string, int> field;
		for (int pos=0; true; ) {
			int colonPos = varStr.find(':', pos+1);
			int commaPos = varStr.find(',', pos+1);

			string nowVar = varStr.substr(pos, colonPos - pos);
			int nowValue = stoi(varStr.substr(colonPos+1, commaPos - colonPos -1));

			field.insert({nowVar, nowValue});
		
			if (commaPos == string::npos) break;
			pos = commaPos+1;
		}

		for (int pos=0, now=0; true; now=0) {
			int orPos = conStr.find('|', pos+1);

			string andStr = conStr.substr(pos, orPos - pos);

			for (int p=0; true; ) {
				int andPos = andStr.find('&', p);
				
				string nowVar = andStr.substr(p, andPos - p);

				now = max(now, field[nowVar]);

				if (andPos == string::npos) break;
				p = andPos+1;
			}

			result = min(result, now);

			if (orPos == string::npos) break;
			pos = orPos+1;
		}

		cout << result << "\n";
	}
}