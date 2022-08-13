#include <iostream>

using namespace std;

int main() {
	int num, result = 0;
    cin >> num;
    
    for (int i=0; i<num; i++) {
    	int nowValue = i;
        
        for (int j=i; j>0; j/=10) 
        	nowValue += j % 10;
           
		if (nowValue == num) {
        	result = i;
            break;
        }
    }

	cout << result;

	return 0;
}