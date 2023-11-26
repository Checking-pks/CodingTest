#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void output(vector<int> v)
{
	cout << v[1] << " " << v[2] << "\n";
}

int main() 
{
	int n;
	cin >> n;
	vector<vector<int>> numList(n, vector<int>(3));

	for (int i=0; i<n; i++) 
	{
		cin >> numList[i][1] 
			>> numList[i][2] 
			>> numList[i][0];
	}

	sort(numList.begin(), numList.end());
	
	int team = numList.back()[1];
	output(numList.back());
	numList.pop_back();

	team = (team == numList.back()[1] ? team : 0);
	output(numList.back());
	numList.pop_back();

	while (team == numList.back()[1])
		numList.pop_back();
	output(numList.back());
}