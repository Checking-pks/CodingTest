#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    a *= b * c;
    
    vector<int> nList(10);
    while (a) {
        nList[a % 10]++;
        a /= 10;
    }
    
    for (int i : nList)
        cout << i << "\n";
}