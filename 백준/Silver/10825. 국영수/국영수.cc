#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class student {
	public:
		string name;
		int korean;
		int english;
		int math;
};

bool cmp(student a, student b) {
	if (a.korean != b.korean) return a.korean > b.korean;
	if (a.english != b.english) return a.english < b.english;
	if (a.math != b.math) return a.math > b.math;
	return a.name < b.name;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int num;
	cin >> num;

	vector<student> studentList(num, student());

	for (int i=0; i<num; i++)
		cin >> studentList[i].name >> 
			studentList[i].korean >> 
			studentList[i].english >> 
			studentList[i].math;

	sort(studentList.begin(), studentList.end(), cmp);

	for (int i=0; i<num; i++) {
		cout << studentList[i].name << "\n";
	}
}