#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    vector <int> numList;
    int numCount, questionCount, totalSum = 0;
    cin >> numCount >> questionCount;
    
    for (int i=0; i<numCount; i++) {
        int num;
        cin >> num;
        
        numList.push_back(num);
		totalSum += num;
    }
    
    for (int i=0; i<questionCount; i++) {
        int start, end, result = 0;
        cin >> start >> end;

		if (end - start >= numCount / 2) {
			result = totalSum;

			for (int j=0; j<start - 1; j++) 
				result -= numList[j];

			for (int j=end; j<numCount; j++)
				result -= numList[j];
		} else 
	        for (int j=start-1; j<end; j++) 
	            result += numList[j];
        
        cout << result << "\n";
    }
    
    return 0;
}