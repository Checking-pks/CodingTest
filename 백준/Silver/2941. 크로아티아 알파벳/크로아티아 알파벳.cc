#include <iostream>
using namespace std;

int main()
{
	    cin.tie(NULL);
    	ios_base::sync_with_stdio(false);
	    
	    int num=0;
	    string text;
	    cin >> text;
	    
	    for (int i=0; i<text.length(); i++) {
	        switch (text[i]) {
	            case 'c':
	                if (text[i+1] == '=' || text[i+1] == '-') {
	                    num++;
	                    i++;
	                } else {
	                    num++;
	                }
	                break;
	            case 'd':
	                if ((text[i+1] == 'z' && text[i+2] == '=')) {
	                    num++;
	                    i += 2;
	                } else if (text[i+1] == '-') {
	                    num++;
	                    i++;
	                } else {
	                    num++;
	                }
	                break;
	            case 'l':
	            case 'n':
	                if (text[i+1] == 'j') {
	                    num++;
	                    i++;
	                } else {
	                    num++;
	                }
	                break;
	            case 's':
	            case 'z':
	                if (text[i+1] == '=') {
	                    num++;
	                    i++;
	                } else {
	                    num++;
	                }
	                break;
	            default:
	                num++;   
	        }
	    }
	    
	    cout << num;
}
