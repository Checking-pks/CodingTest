#include <iostream>
using namespace std;

int main()
{
	    cin.tie(NULL);
    	ios_base::sync_with_stdio(false);
	    
	    int n, num;
	    int list[26];
	    string words;
	    
	    fill_n(list, 26, -1);
	    cin >> words;
	    n = words.length();
	    
	    for (int i=0; i<n; i++) {
	        num = words[i] - 'a';
	        if (list[num] == -1) {
	            list[num] = i;
	        }
	    }
	     
	    for (int i=0; i<26; i++) {
	        cout << list[i] << " ";
	    }
}
