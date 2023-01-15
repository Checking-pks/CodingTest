#include <iostream>
#include <string>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		string id;
		int s1, s2, s3;
		cin >> id >> s1 >> s2 >> s3;
		cout << id << " " 
			<< s1+s2+s3 << " "
			<< ((s1 >= 11 && s2 >= 8 && s3 >= 12 && s1+s2+s3 >= 55) ? "PASS" : "FAIL") << "\n";
	}
}