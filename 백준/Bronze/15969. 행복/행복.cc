#include <iostream>

using namespace std;

int main() {
    int num, max = 0, min = 1000;
    cin >> num;
    
    for (int i=0, score; i<num; i++) {
        cin >> score;
        
        if (max < score)
            max = score;
        if (min > score)
            min = score;
    }
    
    cout << max - min;
}