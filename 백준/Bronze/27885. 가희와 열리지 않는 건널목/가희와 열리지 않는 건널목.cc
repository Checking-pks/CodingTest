#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getTime() {
    string t;
    cin >> t;
    
    int h = stoi(t.substr(0, 2));
    int m = stoi(t.substr(3, 2)) + h * 60;
    int s = stoi(t.substr(6, 2)) + m * 60;
    
    return s;
}

int main()
{
    int c, h, result = 40;
    cin >> c >> h;
    
    vector<int> timeList(c + h);
    for (int i=0; i<c; i++)
        timeList[i] = getTime();
    for (int i=0; i<h; i++)
        timeList[c + i] = getTime();
        
    sort(timeList.begin(), timeList.end());
    
    for (int i=1; i<timeList.size(); i++) 
        result += min(timeList[i] - timeList[i-1], 40);
    
    cout << 86400 - result;
}