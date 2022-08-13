#include <iostream>
#include <string>
using namespace std;

int main()
{
	    cin.tie(NULL);
    	ios_base::sync_with_stdio(false);
	    
	    string text;
	    int num=0;
	    getline(cin, text);
	    
	    //cout << text.length();
	    
	    for (int i=1; i<text.length()-1; i++) {
	        //cout << text[i];
	        if (text[i] == ' ') {
	            num++;
	        }
	    }
	    
	    if ((text.length() == 1) && (text[0] == ' ')) {
	        num--;
	    }
	    cout << num+1;
}
