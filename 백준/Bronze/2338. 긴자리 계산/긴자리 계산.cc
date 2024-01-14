#include <iostream>
#include <vector>

using namespace std;

const long long DIVISION = 1000000000;
const int DIV_LENGTH = 9;

vector<int> StringToVector(string n) {
	bool minus = false;
	vector<int> result;

	if (n.front() == '-') {
		minus = true;
		n = n.substr(1);
	}
	
	for (int i=n.length()-DIV_LENGTH; i>=0; i-=DIV_LENGTH) 
		result.push_back(
			(minus ? -1 : 1) *
			stoi(n.substr(i, DIV_LENGTH))
		);

	if (n.length() % DIV_LENGTH) {
		result.push_back(
			(minus ? -1 : 1) * 
			stoi(n.substr(0, n.length() % DIV_LENGTH))
		);
	}

	return result;
}

vector<int> sum(vector<int> n1, vector<int> n2) {
	vector<int> result(max(n1.size(), n2.size())+1);

	for (int i=0; i<max(n1.size(), n2.size()); i++) {
		if (i<n1.size()) result[i] += n1[i];
		if (i<n2.size()) result[i] += n2[i];
		result[i+1] += result[i] / DIVISION;
		result[i] %= DIVISION;
	}

	while (result.size() && result.back() == 0)
		result.pop_back();

	return result;
}

vector<int> dif(vector<int> n1, vector<int> n2) {
	vector<int> result(max(n1.size(), n2.size())+1);

	for (int i=0; i<max(n1.size(), n2.size()); i++) {
		if (i<n1.size()) result[i] += n1[i];
		if (i<n2.size()) result[i] -= n2[i];
		result[i+1] += result[i] / DIVISION;
		result[i] %= DIVISION;
	}

	while (result.size() && result.back() == 0)
		result.pop_back();
	
	return result;
}

vector<int> mul(vector<int> n1, vector<int> n2) {
	vector<int> result(n1.size()*n2.size()+1);

	for (int i=0; i<n1.size(); i++) {
		if (n1[i] == 0) continue;
		for (int j=0; j<n2.size(); j++) {
			if (n2[j] == 0) continue;
			long long now = 1ll * n1[i] * n2[j];
			now += result[i+j];
			result[i+j+1] += now / DIVISION;
			result[i+j] = now % DIVISION;
		}
	}

	while (result.size() && result.back() == 0)
		result.pop_back();
	
	return result;
}

string output(vector<int> nList) {
	if (nList.empty()) 
		return "0";

	bool minusSign = (nList.back() < 0);

	for (int i=nList.size()-2; i>=0; i--) {
		nList[i+1] -= (minusSign ? -1 : 1);
		nList[i] += (minusSign ? -1 : 1) * DIVISION;
		nList[i+1] += nList[i] / DIVISION;
		nList[i] %= DIVISION;
	}
	
	string result = to_string(nList.back());

	for (int i=nList.size()-2; i>=0; i--) {
		string now = to_string((minusSign ? -1 : 1) * nList[i]);
		result += string(DIV_LENGTH - now.length(), '0');
		result += now;
	}

	return result;
}

int main() {
	bool sameSign = true;
	string n1, n2, sumResult, difResult, mulResult;
	cin >> n1 >> n2;

	vector<int> n1List = StringToVector(n1);
	vector<int> n2List = StringToVector(n2);

	mulResult = output(mul(n1List, n2List));

	if ((n1List.front() ^ n2List.front()) < 0) {
		sameSign = false;
		for (int i=0; i<n2List.size(); i++)
			n2List[i] = -n2List[i];
	}

	sumResult = output(sameSign ? sum(n1List, n2List) : dif(n1List, n2List));
	difResult = output(sameSign ? dif(n1List, n2List) : sum(n1List, n2List));

	cout << sumResult << "\n" << difResult << "\n" << mulResult;
}