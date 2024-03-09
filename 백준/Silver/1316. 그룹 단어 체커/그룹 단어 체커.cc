#include <iostream>
using namespace std;

int main()
{
	    cin.tie(NULL);
    	ios_base::sync_with_stdio(false);
	    
	    int t, num=0;
	    string text;
	    int list[26];
	    fill_n(list, 26, -1);
	    
	    cin >> t;
	    for (int i=0; i<t; i++) {
	        cin >> text;
	        list[text[0]-'a'] = 0;
	        for (int j=1; j<text.length(); j++) {
	            if ((list[text[j]-'a'] == -1) || (text[j] == text[j-1]))
	            {
	                
	                list[text[j]-'a'] = j;
	                
	                if (j+1 == text.length()) {
	                    num++;
	                }
	            } else if ((list[text[j]-'a'] != -1) && (text[j] != text[j-1])) {
	                break;
	            }
	        }
	        
	        if (text.length() == 1) {
	            num++;
	        }
	        fill_n(list, 26, -1);
	    }
	    
	    cout << num;
}
