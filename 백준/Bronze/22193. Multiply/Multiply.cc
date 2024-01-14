#include <iostream>
#include <vector>

using namespace std;

const long long DIVISION = 1000000000;
const int DIV_LENGTH = 9;

vector<int> StringToVector(string n) {
	vector<int> result;
	for (int i=n.length()-DIV_LENGTH; i>=0; i-=DIV_LENGTH) 
		result.push_back(stoi(n.substr(i, DIV_LENGTH)));

	if (n.length() % DIV_LENGTH) 
		result.push_back(stoi(n.substr(0, n.length() % DIV_LENGTH)));
	
	return result;
}

vector<int> multiple(vector<int> nList, vector<int> mList) {
	vector<int> result(nList.size()*mList.size()+1);
	
	for (int i=0; i<nList.size(); i++) {
		if (nList[i] == 0) continue;
		for (int j=0; j<mList.size(); j++) {
			if (mList[j] == 0) continue;
			long long now = 1ll * nList[i] * mList[j];
			now += result[i+j];
			if (now / DIVISION) 
				result[i+j+1] += now / DIVISION;
			result[i+j] = now % DIVISION;
		}
	}

	while (result.size() > 1 && result.back() == 0)
		result.pop_back();

	return result;
}

void output(vector<int> numList) {
	cout << numList.back();

	for (int i=numList.size()-2; i>=0; i--) {
		string now = to_string(numList[i]);
		cout << string(DIV_LENGTH - now.length(), '0');
		cout << now;
	}
}

int main() {
	int NLength, MLength;
	string N, M;
	cin >> NLength >> MLength >> N >> M;

	vector<int> nList = StringToVector(N), mList = StringToVector(M);
	vector<int> result = multiple(nList, mList);
	output(result);
}