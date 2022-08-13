#include <iostream>
using namespace std;

int main()
{
	    cin.tie(NULL);
    	ios_base::sync_with_stdio(false);
	    
	    string num1, num2;
	    char x;
	    cin >> num1 >> num2;
	    
	    x = num1[2];
	    num1[2] = num1[0];
	    num1[0] = x;
	    
	    x = num2[2];
	    num2[2] = num2[0];
	    num2[0] = x;
	    
	    if (stoi(num1) > stoi(num2)) {
	        cout << num1;
	    } else {
	        cout << num2;
	    }
}
