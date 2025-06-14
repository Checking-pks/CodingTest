#include <iostream>

using namespace std;

int getMoveCount(string S)
{
	int result = 0;
	for (char c : S)
		result += (c == '0');
	return (result ? result : 5);
}

bool simulate()
{
	string S;
	int times = 0, pos = 0;
	bool corner1 = false, corner2 = false, center = false, goal = false;

	while (cin >> S)
	{
		int move = getMoveCount(S);

		if (move < 4) times++;

		pos += move;

		if (pos == 5) corner1 = true;
		if (!corner1 && pos == 10) corner2 = true;
		if (corner1 && pos == 8) center = true;

		if (times < 10)
		{
			if (corner1 && center && pos >= 11)		return true;
			if (!corner1 && corner2 && pos >= 16)	return true;
			if (corner1 && !center && pos >= 16)	return true;
			if (!corner1 && !corner2 && pos >= 20)	return true;
		}
		else
			return false;
	}

	return false;
}

int main()
{
	cout << (simulate() ? "WIN" : "LOSE");
}