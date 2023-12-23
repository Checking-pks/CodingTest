#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> group;

int find(int num)
{
	if (group[num] == num)
		return num;

	group[num] = find(group[num]);
	return group[num];
}

void unionList(int a, int b)
{
	a = find(group[a]);
	b = find(group[b]);

	if (a < b) group[a] = b;
	else group[b] = a;
}

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m, result=0;
	cin >> n >> m;

	group = vector<int>(n);

	for (int i=0; i<n; i++)
		group[i] = i;

	for(int i=1, a, b; i<=m; i++)
	{
		cin >> a >> b;
		if (result) continue;
		
		if (find(a) == find(b))
			result = i;
		else
			unionList(a, b);
	}

	cout << result;
}