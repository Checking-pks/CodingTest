#include <iostream>
using namespace std;

int main()
{
	    cin.tie(NULL);
    	ios_base::sync_with_stdio(false);
	    
	    string text;
	    cin >> text;
	    
	    int num=0;
	    
	    for (int i=0; i < text.length(); i++) {
	        
	        switch(text[i]) {
	            case 'A':
	            case 'B':
	            case 'C':
	                num += 3;
	                break;
	            case 'D':
	            case 'E':
	            case 'F':
	                num += 4;
	                break;
	            case 'G':
	            case 'H': 
	            case 'I':
	                num += 5;
	                break;
	            case 'J':
	            case 'K':
	            case 'L':
	                num += 6;
	                break;
	            case 'M':
	            case 'N':
	            case 'O':
	                num += 7;
	                break;
	            case 'P':
	            case 'Q':
	            case 'R':
	            case 'S':
	                num += 8;
	                break;
	            case 'T':
	            case 'U':
	            case 'V':
	                num += 9;
	                break;
	            case 'W':
	            case 'X':
	            case 'Y':
	            case 'Z':
	                num += 10;
	                break;
	        }
	       
	    }
	    
	    cout << num;
}
