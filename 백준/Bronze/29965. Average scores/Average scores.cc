#include <iostream>

using namespace std;

int main() 
{
	int num;
	cin >> num;

	long long mSum=0, jSum=0;
	int mNum=0, jNum=0;

	while (num--) {
		char c;
		long long now;
		cin >> c >> now;

		if (c=='M') {
			mSum += now;
			mNum++;
		} else {
			jSum += now;
			jNum++;
		}
	}

	double mAve, jAve;

	mAve = (mNum ? 1.0 * mSum / mNum : 0);
	jAve = (jNum ? 1.0 * jSum / jNum : 0);

	if (mAve > jAve) cout << 'M';
	else if (mAve < jAve) cout << 'J';
	else cout << 'V';
}