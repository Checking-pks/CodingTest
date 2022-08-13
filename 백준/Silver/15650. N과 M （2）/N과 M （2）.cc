#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> numList;
	list<list<int>> permutationList;
	int numLength, outputLength;

	cin >> numLength >> outputLength;

	for (int i=1; i<=numLength; i++) 
		numList.push_back(i);

	do {
		list<int> nowPermutation;

		for (int i=0; i<outputLength; i++) 
			nowPermutation.push_back(numList[i]);

		nowPermutation.sort();

		permutationList.push_back(nowPermutation);
	} while (next_permutation(numList.begin(), numList.end()));

	permutationList.sort();
	permutationList.unique();

	for (list<int> result:permutationList) {
		for (int n:result) 
			cout << n << " ";
		cout << "\n";
	}

	return 0;

}