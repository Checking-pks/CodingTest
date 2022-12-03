#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
    int sum = 0;
    vector<int> num;
    list<int> result;
    
    for (int i=0, height; i<9; i++) {
        cin >> height;
        sum += height;
        num.push_back(height);
    }
    
    for (int i=0, size = num.size(); i<size; i++) 
        for (int j=i+1; j<size; j++) 
            if (sum - num[i] - num[j] == 100) {
                for (int k=0; k<size; k++) 
                    if (k != i && k != j) 
                        result.push_back(num[k]);

				result.sort();
    
    			for (int n:result)
			        cout << n << "\n";

				return 0;
			}
}