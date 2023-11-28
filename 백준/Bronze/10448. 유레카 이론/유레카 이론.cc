#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> triangle;

	for (int i=1; i*(i+1)/2 <= 1000; i++) 
		triangle.push_back(i*(i+1)/2);
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		bool result = false;
		int n;
		cin >> n;

		for (int i=0; !result && i<triangle.size(); i++) 
			for (int j=i; !result && j<triangle.size()-1; j++) 
				for (int k=j; !result && k<triangle.size(); k++) 
					if (triangle[i] + triangle[j] + triangle[k] == n)
						result = true;

		cout << result << "\n";
	}
}