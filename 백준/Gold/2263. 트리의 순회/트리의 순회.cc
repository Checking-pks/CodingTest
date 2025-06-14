#include <iostream>
#include <vector>
#include <map>

using namespace std;

int n;
map<int, int> inorder;
vector<int> postorder;

void init()
{
	cin >> n;

	for (int i = 0, now; i < n; i++) 
	{
		cin >> now;
		inorder[now] = i;
	}

	postorder = vector<int>(n);
	for (int i = 0; i < n; i++) 
		cin >> postorder[i];
}

void simulate(int s, int e, int depth)
{
	vector<pair<int, int>> group;

	for (int i = e - depth; i >= s; i--)
	{
		cout << postorder[i] << " ";
		group.push_back({inorder[postorder[i]], i});
		i = inorder[postorder[i]] - depth;
	}
	
	while (group.size())
	{
	    int start = group.back().first;
	    int end = group.back().second;
	    
	    group.pop_back();
	    
	    if (start - end == depth) continue;

		simulate(start - depth, end + depth, depth + 1);
	}
}

int main()
{
	init();
	simulate(0, n - 1, 0);	
}