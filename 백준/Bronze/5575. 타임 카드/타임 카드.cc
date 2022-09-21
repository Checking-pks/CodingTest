#include <iostream>

using namespace std;

int main() {
    for (int i=0; i<3; i++) {
        int h, m, s;
        int startTime, endTime, workingTime;
        
        cin >> h >> m >> s;
        startTime = h * 3600 + m * 60 + s;
        
        cin >> h >> m >> s;
        endTime = h * 3600 + m * 60 + s;
        
        workingTime = endTime - startTime;
        
        h = workingTime / 3600;
        m = (workingTime % 3600) / 60;
        s = workingTime % 60;
        
        cout << h << " " << m << " " << s << "\n";
    }
}