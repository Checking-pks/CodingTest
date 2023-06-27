#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int testcase;
	cin >> testcase;

	cin.ignore();

	for (int i=1; i<=testcase; i++) {
		vector<int> alphabet1(26, 0), alphabet2(26, 0);
		string str1, str2;
		int result = 0;
		
		getline(cin, str1);
		getline(cin, str2);

		for (char c:str1) alphabet1[c-'a']++;
		for (char c:str2) alphabet2[c-'a']++;

		for (int i=0; i<26; i++)
			result += abs(alphabet1[i] - alphabet2[i]);

		cout << "Case #" << i << ": " << result << "\n";
	}
}