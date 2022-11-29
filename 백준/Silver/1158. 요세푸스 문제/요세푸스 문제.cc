#include <iostream>
#include <list>

using namespace std;

int josephus(list<int> & numList, int times) {
	int result;

	for (int i = 0; i < times - 1; i++) {
		numList.push_back(numList.front());
		numList.pop_front();
	}

	result = numList.front();
	numList.pop_front();

	return result;
}

void output(list<int> result) {
	cout << "<";

	while (result.size() > 1) {
		cout << result.front() << ", ";
		result.pop_front();
	}

	cout << result.front() << ">";
}

int main() {
	list<int> numList, result;
	int num, times;

	// input
	cin >> num >> times;

	// 1 ~ num 배열 입력
	for (int i=1; i<=num; i++) 
		numList.push_back(i);

	// 요세푸스 실행
	while (numList.size()) 
		result.push_back(josephus(numList, times));

	// output
	output(result);
}