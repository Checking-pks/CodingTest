#include <iostream>
using namespace std;

int main()
{
	    cin.tie(NULL);
    	ios_base::sync_with_stdio(false);
	    
	    int n, num, max=-1, checking=0, t;
	    int list[26];
	    string words;
	    
	    fill_n(list, 26, -1);
	    cin >> words;
	    
	    n = words.length();
	    
	    for (int i=0; i<n; i++) {
	        words[i] = toupper(words[i]);
	        num = words[i] - 'A';
	        list[num]++;
	    }
	     
	    for (int i=0; i<26; i++) {
	        if (max < list[i]) {
	            max = list[i];
	            checking = 1;
	            t = i;
	        } else if (max == list[i]) {
	            checking++;
	        }
	        
	        //cout << list[i] << " \\ "<<checking << " \\ " << max << " \\ "<<"\n";
	    }
	    
	    if (checking > 1) {
	        cout << "?";
	    } else {
	        cout << char(t+'A');
	    }
}
