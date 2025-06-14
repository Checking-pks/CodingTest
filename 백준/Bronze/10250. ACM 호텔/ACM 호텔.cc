#include <iostream>
#include <string>

using namespace std;

int main() {
	int times;
    cin >> times;
    
    for (int i=0; i<times; i++) {
    	int h, w, n;
        cin >> h >> w >> n;

        string floor, room;

        room = to_string((n - 1) / h + 1);
        floor = to_string((n % h == 0) ? h : n % h) + ((room.length() != 2) ? "0" : "");

        cout << floor << room << "\n";
    }
	
	return 0;
}