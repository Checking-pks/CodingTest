#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
	int n, m;
	cin >> n >> m;

	cout << m * 2 + 1 << "\n";
	cout << "U 1 -1\n";
	
	vector<int> nList(n + 2);
	for (int i = 1, now; i <= m; i++)
	{
		cin >> now;
		now++;
		cout << "U " << now << " " << i - nList[now] << "\n";
		cout << "P\n";
	}
}