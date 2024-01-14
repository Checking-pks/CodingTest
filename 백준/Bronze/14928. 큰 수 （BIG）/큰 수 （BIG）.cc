#include <iostream>
#include <vector>

using namespace std;

const long long DIVISION = 1000000000;
const long long DIVNUM = 20000303;
const int DIV_LENGTH = 9;

vector<int> StringToVector(string n) {
	vector<int> result;
	for (int i=n.length()-DIV_LENGTH; i>=0; i-=DIV_LENGTH) 
		result.push_back(stoi(n.substr(i, DIV_LENGTH)));

	if (n.length() % DIV_LENGTH) 
		result.push_back(stoi(n.substr(0, n.length() % DIV_LENGTH)));
	
	return result;
}

long long div(vector<int> nList) {
	long long result = 0;

	for (int i=nList.size()-1; i>=0; i--) {
		result *= DIVISION;
		result += nList[i];
		result %= DIVNUM;
	}

	return result;
}

int main() {
	string N;
	cin >> N;

	vector<int> nList = StringToVector(N);
	cout << div(nList);
}