#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m, result = 0;
    string input;
	
	bool stackIO = false;
	int stack = 0;
    
    cin >> n >> m >> input;

	input.push_back('X');

	for (int i=0; i<input.length(); i++) {
		if ((!stackIO && input[i] == 'I') || (stackIO && input[i] == 'O')) {
			if (stackIO && input[i+1] == 'I')
				stack++;
			
			stackIO = !stackIO;
		} else {
			stackIO = (input[i] == 'I') ? true : false;
			stack = 0;
		}

		if (stackIO && stack >= n) 
			result++;
	}

	cout << result;
    
    return 0;
}