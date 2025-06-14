#include <iostream>
#include <vector>

using namespace std;

int N, R, Q;
vector<vector<int>> connect;
vector<int> query;
vector<int> countList;

class node
{
public:
	int num = 0;
    node *parent;
	vector<node *> child;
	int childCount = 0;
};

void input()
{
	cin >> N >> R >> Q;
	connect = vector<vector<int>>(N + 1);
	countList = vector<int>(N + 1);
	for (int i = 1, a, b; i < N; i++)
	{
		cin >> a >> b;
		connect[a].push_back(b);
		connect[b].push_back(a);
	}

	for (int i = 0, now; i < Q; i++)
	{
		cin >> now;
		query.push_back(now);
	}
}

void makeTree(node &parent, int pos)
{
	node *newNode = new node();
	newNode->num = pos;
	newNode->parent = &parent;
	parent.child.push_back(newNode);

	for (int i = 0; i < connect[pos].size(); i++)
	{
		if (parent.num == connect[pos][i])
			continue;

		makeTree(*newNode, connect[pos][i]);
	}
}

void countSubtreeNodes(node &currentNode)
{
    countList[currentNode.num] = 1;
    for (int i = 0; i < currentNode.child.size(); i++)
    {
        countSubtreeNodes(*currentNode.child[i]);
        countList[currentNode.num] += countList[currentNode.child[i]->num];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
	input();

	node root;
	makeTree(root, R);
	
	countSubtreeNodes(root);

	for (int i = 0; i < Q; i++)
	    cout << countList[query[i]] << "\n";
}