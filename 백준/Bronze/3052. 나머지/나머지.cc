#include <iostream>
using namespace std;


int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
    
    int list[10];
    int num, length=0;
    
    for (int i=0; i < 10; i++) {
    	cin >> num;
    	
    	if (length == 0) {
    		list[length] = num%42;
    		length++;
    	} 
        else {
        	for (int j=0; j < length; j++) {
        		if (list[j] !=num%42) {
        			if (j != length-1){
        			continue;
        			} else {
        				list[length] = num%42;
        				length++;
        				break;
        			}
        		} else {
        			break;	
        		}
        	}
    	}
    }
    	cout << length;
}