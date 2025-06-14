#include <iostream>

using namespace std;

int main()
{
	string N;
	int M;
	cin >> N >> M;

	string result = "";
	for (int i = 0, end = stoi(N); i < end; i++)
	{
		result += N;

		if (result.length() >= M)
		{
			while (result.length() > M)
				result.pop_back();
			break;
		}
	}

	cout << result;
}