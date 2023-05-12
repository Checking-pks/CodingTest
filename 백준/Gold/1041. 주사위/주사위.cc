#include <iostream>
using namespace std;

int main() {
    long long dice, three_side = 151, two_side = 151, one_side = 151;
    int num[6] = {0,};

    cin >> dice;

    for (int i=0; i<6; i++) 
        cin >> num[i];

    if (dice == 1) {
        int result = 0, max = 0;

        for (int i=0; i<6; i++) {
            result += num[i];
            if (max < num[i]) max = num[i];
        }

        cout << result - max;
    } else {
		for (int i=0; i<6; i++) {
			for (int j=i+1; j<6; j++) {
				for (int k=j+1; k<6; k++) {
					if (i+j == 5) continue;
					if (i+k == 5) continue;
					if (j+k == 5) continue;

					if (three_side > num[i] + num[j] + num[k])
						three_side = num[i] + num[j] + num[k];
				}
			}
		}
	
	    for (int i=0; i<6; i++) {
	        for (int j=i+1; j<6; j++) {
	            if (i+j == 5) continue;
	
	            if (two_side > num[i] + num[j]) two_side = num[i] + num[j];
	        }
	
	        if (one_side > num[i]) one_side = num[i];
	    }
		
        cout << three_side * 4 
			+ two_side * (8 * dice - 12) 
			+ one_side * (5 * dice * dice -16 * dice + 12);
    }
}