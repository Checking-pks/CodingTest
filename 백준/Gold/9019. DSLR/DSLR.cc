#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(){
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		int input, output;
		cin >> input >> output;

		list<pair<int, string>> bucket = {{input, ""}};
		vector<bool> visited(10001, false);
		
		while (bucket.front().first != output) {
			int D, S, L, R;

			D = (bucket.front().first * 2) % 10000;
			S = (bucket.front().first + 10000 - 1) % 10000;
			L = (bucket.front().first * 10 + bucket.front().first / 1000) % 10000;
			R = (bucket.front().first / 10 + bucket.front().first * 1000) % 10000;

			if (!visited[D])
				bucket.push_back({D, bucket.front().second + "D"});
			if (!visited[S])
				bucket.push_back({S, bucket.front().second + "S"});
			if (!visited[L])
				bucket.push_back({L, bucket.front().second + "L"});
			if (!visited[R])
				bucket.push_back({R, bucket.front().second + "R"});

			visited[D] = true;
			visited[S] = true;
			visited[L] = true;
			visited[R] = true;
			
			bucket.pop_front();
		}

		cout << bucket.front().second << "\n";
	}
}