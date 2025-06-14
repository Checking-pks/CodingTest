#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<pair<int, string>> nodeList(26);
vector<int> costList(26);

void input()
{
	string line;
	
	while (getline(cin, line))
	{
		int pos = line[0] - 'A';
		int space = line.find(' ', 2);
		
		if (space == -1)
		    nodeList[pos] = {stoi(line.substr(2)), ""};
		else
		    nodeList[pos] = {
		        stoi(line.substr(2, space - 2)),
		        line.substr(space + 1)
		    };
	}
}

int simulate(int pos)
{
	if (costList[pos])
		return costList[pos];

	int cost = 0;
	for (int i = 0, nowPos; i < nodeList[pos].second.length(); i++)
	{
		nowPos = nodeList[pos].second[i] - 'A';
		cost = max(cost, simulate(nowPos));
	}

	costList[pos] = cost + nodeList[pos].first;
	return costList[pos];
}

int main()
{
	input();

	int result = 0;
	for (int i = 0; i < 26; i++) 
		if (nodeList[i].first)
			result = max(result, simulate(i));

	cout << result;
}