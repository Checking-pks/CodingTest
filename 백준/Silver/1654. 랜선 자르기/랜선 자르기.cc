#include <iostream>
#include <list>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int lineNum, lineNeed;
	list<int> lineList;
	
	cin >> lineNum >> lineNeed;
	
	for (int i = 0; i < lineNum; i++) {
		int nowLine;
		cin >> nowLine;
		
		lineList.push_back(nowLine);
	}
	
	lineList.sort();
	
	long long minLength = 1;
	int maxLength = lineList.back();
	
	while (minLength <= maxLength) {
		long long midLength = (maxLength + minLength) / 2;
		int nowLineNum = 0;
		
		for (int nowLine : lineList)
		  	nowLineNum += nowLine / midLength;
		
		if (nowLineNum < lineNeed) 
		  	maxLength = midLength - 1;
		else if (nowLineNum >= lineNeed) 
		  	minLength = midLength + 1;
	}

	cout << maxLength;
	
	return 0;
}