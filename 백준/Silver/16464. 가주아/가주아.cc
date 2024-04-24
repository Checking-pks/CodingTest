#include <iostream>
#include <unordered_set>
using namespace std;

void init(unordered_set<int> &nList) {
	for (int i=0; i<30; i++)
		nList.insert(1 << i);
}

int main()
{
	unordered_set<int> GoHanGangList;
	init(GoHanGangList);
	
	int N, K;
	cin >> N;

	while (N--) {
		cin >> K;

		cout << (
			GoHanGangList.find(K) != GoHanGangList.end() ?
			"GoHanGang\n" : "Gazua\n"
		);
	}
}